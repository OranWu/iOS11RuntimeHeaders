/* Generated by RuntimeBrowser.
 */

@protocol GEORequestCounterProtocol <NSObject>

@required

- (void)clearCounters;
- (bool)countersEnabled;
- (void)fetchTrafficProbeCollectionsStartingFrom:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)incrementAtTime:(NSDate *)arg1 app:(NSString *)arg2 requestType:(unsigned char)arg3 result:(unsigned char)arg4 xmitBytes:(unsigned long long)arg5 recvBytes:(unsigned long long)arg6;
- (void)incrementCountsForLogMsgCollection:(GEOLogMessageCollectionRequest *)arg1 appId:(NSString *)arg2 result:(unsigned char)arg3 xmitBytes:(unsigned long long)arg4 recvBytes:(unsigned long long)arg5;
- (void)incrementForApp:(NSString *)arg1 requestType:(unsigned char)arg2 result:(unsigned char)arg3 xmitBytes:(unsigned long long)arg4 recvBytes:(unsigned long long)arg5;
- (void)readRequestsPerAppSince:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)recordTrafficProbeCollectionAt:(NSDate *)arg1 tripId:(NSString *)arg2 locationCount:(int)arg3 result:(unsigned char)arg4;
- (void)setCountersEnabled:(bool)arg1;
- (void)startPowerLogSessionWithName:(NSString *)arg1;

@end
