#pragma once
#include <QMultiMap>
#include <QMap>
#include <QDomDocument>
#include <QXmlStreamWriter>

class TrainModuleConfig
{
    struct TrainItemAttribute
	{
		TrainItemAttribute(QString id,
			               QString strGlobalName, 
						   QString strShowName,
			               QString strCaseFile,
						   QString strVideoFile
						   )
			:
			m_ID(id),
			m_GlobalName(strGlobalName),
			m_ShowName(strShowName),
			m_strCaseFile(strCaseFile),
			m_strAviFile(strVideoFile)
		{ }
		
		QString	m_ID;

		QString m_GlobalName;

		QString m_ShowName;

		QString m_strCaseFile;
		
		QString m_strAviFile;
		
	};
public:
	static TrainModuleConfig * Instance();
	
	TrainModuleConfig(void);
	
	~TrainModuleConfig(void);
	
	bool LoadFromXML(const QString &fileName);

	bool GetMenuAttributeById(const QString & id , QString & globalName,QString & showName , QString & casefile, QString & videoFile);
	QDomDocument m_document;
public:
	
	bool m_IsLoaded;
	std::map<QString, TrainItemAttribute> m_TrainItemMap;//key - id
};