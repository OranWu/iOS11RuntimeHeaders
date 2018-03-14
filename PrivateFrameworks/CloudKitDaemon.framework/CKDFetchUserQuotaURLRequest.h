/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchUserQuotaURLRequest : CKDURLRequest {
    id /* block */  _quotaFetchedBlock;
}

@property (nonatomic, copy) id /* block */ quotaFetchedBlock;

- (void).cxx_destruct;
- (id)generateRequestOperations;
- (int)operationType;
- (id /* block */)quotaFetchedBlock;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setQuotaFetchedBlock:(id /* block */)arg1;

@end