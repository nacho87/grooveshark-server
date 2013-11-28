#ifndef QREQUEST_H
#define QREQUEST_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QMutex>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>


class QRequest : public QObject
{
    Q_OBJECT
private:
    QNetworkAccessManager *manager;
    int currentPostActionId;

public:
    explicit QRequest(QObject *parent = 0);
    static QString getMd5FromString(QString md5);
    static QString getSha1FromString(QString sha1string);
    void postData(QString url, QString data, int postActionId);

    // Static functions
    static QString jsonEncode(const QMap<QString, QVariant> &map);

    ~QRequest();

signals:
    void dataPosted(int postActionId, QString resultText);

private slots:
    void dataReceived(QNetworkReply *reply);

private:
    QMutex mutex;
};


#endif // QREQUEST_H