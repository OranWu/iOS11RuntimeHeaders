/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPXChangesObserver : FPXObserver <NSFileProviderChangeObserver> {
    NSMutableArray * _changedItems;
    NSMutableArray * _deletedItemIDs;
    id /* block */  _finished;
    NSData * _originalSyncAnchor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didDeleteItemsWithIdentifiers:(id)arg1;
- (void)didUpdateItems:(id)arg1;
- (void)finishEnumeratingChangesUpToSyncAnchor:(id)arg1 moreComing:(bool)arg2;
- (void)finishEnumeratingWithError:(id)arg1;
- (id /* block */)finished;
- (id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2 previousChangeToken:(id)arg3;
- (void)setFinished:(id /* block */)arg1;

@end