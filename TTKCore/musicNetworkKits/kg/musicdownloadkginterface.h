#ifndef MUSICDOWNLOADKGINTERFACE_H
#define MUSICDOWNLOADKGINTERFACE_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2015 - 2017 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include "musicobject.h"
#include "musicglobaldefine.h"

///////////////////////////////////////////////////////////////////////////
const QString KG_ALBUM_URL         = "T1I2UzExcHpQU0lzNVJTVkR4UkVabkxndmF6eGp3ajVvSHJaZWFQdFlybENrVDJiNWZ0OUw0VjN2TjArWFg4MS9LT0pRMmRrYzlIeWYvZmpEVkR6aFdwSUZhN2pLNGx5NHdaWFFGSlRUWDZ2aWFWazBhWmZWSXBEQXBHcjhIb1c=";
const QString KG_ALBUM_INFO_URL    = "ajBGaXREQ3Y1S3pwZGkxd1pJUEREbUNxL3d0SWpPZzFNQjhZQjdyZk0rQmRzQVZXUFBrcVp0ekh6NEtLbjJWTklDNWIxbGpycFFqbHVVRE95aDRWMUJ4NUNVRTUySWdU";
///////////////////////////////////////////////////////////////////////////
const QString KG_SONG_SEARCH_URL   = "K3l5ZjdYOTcySmR6cFdhbHhNTU1KSWswY0JKa1JFWmJoZjJHTExaZFdQejltM3JxbFRWNWRHVmlzL01ORzIwSTVGTHd3dzFaUWdWTG1QRk9ockZJNkczb3poTjBKYVFIdHBNeUpmb013bmFXWXpIZWErZXhJcWRUSEpyTlQ3eGVsWXlpMFJvMzZCZytYMnJMQSs4a2FPYks1T0hwQzFvQWFpZjFWVU5UTXA1YlN2MWxHWW1SQ1VFeTJiYjVTV2d1";
const QString KG_SONG_LRC_URL      = "Yld5K1Rac2JFc3d0YThTbnluN2RkQ0U0bjBWQkxSQWJGNDZoT2xvUERFdEUzV0RkalhjbVpYT1FGcmY0UlZJTDRoTHFMMklXNWRsdyswcG5XYzArUlJ6bHhoWXdyQ3JtSXRiWEdXbE53dXNjcU1QMzRBNFBhMDdWOE95eVVURG5KRHRPNFE9PQ==";
const QString KG_SONG_ATTR_URL     = "SFBKRGpUWnBOS3BVMEZVTWxzWFFDNUd0NDdaZkg4WWEyWUhEOVpidGcyY0c1QmJaWTBIZUIwY0UvcVZLT1ZKK052NGg4YmlTSFZVWmpZdUFGVDRBVWNKQ2JkWi9rTUhSWlNTcElnPT0=";
const QString KG_SONG_INFO_URL     = "M1pINTArNUl1RFdvNmtNU3U3bUo4MkxDUnp0UkxrZ3dqS01NQXRKZm9hTGVWYzVidTNmKzNoU1dxdG5odXRIekZISXlVVWlLNVBUdG55bElFWFl6Qy9Eclgyaz0=";
///////////////////////////////////////////////////////////////////////////
const QString KG_ARTIST_URL        = "b0pLNUhiUmVtZktML3REeTRLQUFRY0tBZXFtU2IyaU9tWGtNbmg0WUlzYTZWUUdQTU00VkVJdWRWYkJxL013QjBMY1YvUzhGU3RWWEFmR2ZQVW1pVkl4enhDZ1p5ZG14bllHZnpkWm5qemR5NlprUGxDaEs1bnhrQzJQYkhCOUY2NWV3UmxuVEs2dVU0U3UwbjJCZ053PT0=";
///////////////////////////////////////////////////////////////////////////
const QString KG_MV_ATTR_URL       = "ajJaR0tsRUUzcUE0ZnZGYmhhR205TkwvUGFMcSt3RU5RaGhqQVFEelRjemRVR3RKNjBEVXJzaWFCU2NFNExoaTFFcDI5bkpMQlRnZlRmWHcvQS9DNzVNNGw4ek1pM2NoTjN4QVBYME4zWkxBME94Mg==";
///////////////////////////////////////////////////////////////////////////
const QString KG_PLAYLIST_URL      = "TVBqSm5PcUZpWldpMk1HRWVKellJZDdBbTI1dGF2NHo5bGZ1aTJ1QWp3a3psclFxZ3ljY1JHOHdNa21VRkdnTWtwU1dLYm12ellWOEk2U0xjYlQ3QzJRYm92WlliQnQ0RGlaUXNPRktxQncxcjZNS2x3REFxSFJ1SzlNPQ==";
const QString KG_PLAYLIST_ATTR_URL = "WFZ6WjlEOWtHQ3UrTnUxbDVmZHNSd2IrblY1VlNDS2pZTXN0TEloRUc1aW42eEthN1RVdzFvRllNcW5hdWdqUmJSYmh0T2hzVGRDLzh5dmpZUm1pc2taTHJIdnlUeWRiMkdEYXZpb1J1d3FiQ01heGJQM1diRXArYTllUGZKakdKVUltV0RxSGhHaz0=";
///////////////////////////////////////////////////////////////////////////

class QNetworkAccessManager;

/*! @brief The class to kugou query download interface.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_NETWORK_EXPORT MusicDownLoadKGInterface
{
public:
    void readFromMusicSongAttribute(MusicObject::MusicSongInfomation *info,
                                    const QString &hash, QNetworkAccessManager *manager);
    /*!
     * Read tags(size\bitrate\url) from query results.
     */
    void readFromMusicSongAttribute(MusicObject::MusicSongInfomation *info, QNetworkAccessManager *manager,
                                    const QVariantMap &key, const QString &quality, bool all);
    /*!
     * Read tags(size\bitrate\url) from query results.
     */
    void readFromMusicSongLrcAndPic(MusicObject::MusicSongInfomation *info,
                                    const QString &hash, QNetworkAccessManager *manager);
    /*!
     * Read tags(lrc\smallpic) from query results.
     */
    int map2NormalBitrate(int bitrate);
    /*!
     * Map json bitrate to normal bitrate.
     */

};

#endif // MUSICDOWNLOADKGINTERFACE_H
