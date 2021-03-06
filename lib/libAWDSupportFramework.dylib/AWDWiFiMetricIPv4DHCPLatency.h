/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricIPv4DHCPLatency : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int dhcpLatencyMilliSecs : 1; 
        unsigned int dhcpLeaseMins : 1; 
        unsigned int securityType : 1; 
    unsigned int _dhcpLatencyMilliSecs;
    unsigned int _dhcpLeaseMins;
    } _has;
    unsigned int _securityType;
    unsigned long long _timestamp;
}

@property unsigned int dhcpLatencyMilliSecs;
@property unsigned int dhcpLeaseMins;
@property BOOL hasDhcpLatencyMilliSecs;
@property BOOL hasDhcpLeaseMins;
@property BOOL hasSecurityType;
@property BOOL hasTimestamp;
@property unsigned int securityType;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)dhcpLatencyMilliSecs;
- (unsigned int)dhcpLeaseMins;
- (id)dictionaryRepresentation;
- (BOOL)hasDhcpLatencyMilliSecs;
- (BOOL)hasDhcpLeaseMins;
- (BOOL)hasSecurityType;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)securityType;
- (void)setDhcpLatencyMilliSecs:(unsigned int)arg1;
- (void)setDhcpLeaseMins:(unsigned int)arg1;
- (void)setHasDhcpLatencyMilliSecs:(BOOL)arg1;
- (void)setHasDhcpLeaseMins:(BOOL)arg1;
- (void)setHasSecurityType:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setSecurityType:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
