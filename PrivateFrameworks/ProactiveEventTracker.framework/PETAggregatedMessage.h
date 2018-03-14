/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

@interface PETAggregatedMessage : PBCodable <NSCopying> {
    NSMutableArray * _buckets;
    int  _count;
    PETDistribution * _distribution;
    struct { 
        unsigned int count : 1; 
    }  _has;
    NSData * _keyMessage;
}

@property (nonatomic, retain) NSMutableArray *buckets;
@property (nonatomic) int count;
@property (nonatomic, retain) PETDistribution *distribution;
@property (nonatomic) bool hasCount;
@property (nonatomic, readonly) bool hasDistribution;
@property (nonatomic, readonly) bool hasKeyMessage;
@property (nonatomic, retain) NSData *keyMessage;

+ (Class)bucketsType;

- (void).cxx_destruct;
- (void)addBuckets:(id)arg1;
- (id)buckets;
- (id)bucketsAtIndex:(unsigned long long)arg1;
- (unsigned long long)bucketsCount;
- (void)clearBuckets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)count;
- (id)description;
- (id)dictionaryRepresentation;
- (id)distribution;
- (bool)hasCount;
- (bool)hasDistribution;
- (bool)hasKeyMessage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyMessage;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBuckets:(id)arg1;
- (void)setCount:(int)arg1;
- (void)setDistribution:(id)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setKeyMessage:(id)arg1;
- (void)writeTo:(id)arg1;

@end