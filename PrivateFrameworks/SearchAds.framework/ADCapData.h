/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
 */

@interface ADCapData : NSObject {
    NSMutableArray * _clickCountData;
    NSMutableArray * _frequencyCapData;
    NSString * _toroID;
}

@property (nonatomic, retain) NSMutableArray *clickCountData;
@property (nonatomic, retain) NSMutableArray *frequencyCapData;
@property (nonatomic, retain) NSString *toroID;

- (void).cxx_destruct;
- (id)capDataJSON:(id)arg1;
- (void)checkAndUpdateToroID;
- (id)clickCountData;
- (id)dictionaryRepresentation;
- (void)eraseCapData;
- (id)filteredCapData:(id)arg1 maxItems:(unsigned long long)arg2 expirationThresholdInSeconds:(double)arg3;
- (id)frequencyCapData;
- (id)frequencyCapDataParameter;
- (id)init;
- (void)resetCapDataObject;
- (void)restoreAllCapData;
- (id)restoreCapDataArrayFromPlist:(id)arg1;
- (void)saveCapDataWithReason:(id)arg1;
- (void)setClickCountData:(id)arg1;
- (void)setFrequencyCapData:(id)arg1;
- (void)setToroID:(id)arg1;
- (id)toroClickCountDataParameter;
- (id)toroID;
- (void)updateCapDataWith:(id)arg1 ofKind:(long long)arg2;

@end
