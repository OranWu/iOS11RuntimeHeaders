/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLBatchUpdateRequestContext : NSSQLStoreRequestContext {
    NSFetchRequest * _fetchRequest;
    NSSQLiteStatement * _updateStatement;
}

@property (nonatomic, readonly) NSBatchUpdateRequest *request;
@property (nonatomic, readonly) NSSQLiteStatement *updateStatement;

- (void)_createUpdateStatement;
- (id)createCountRequestContextForObjectsToUpdate;
- (id)createFetchRequestContextForObjectsToUpdate;
- (void)dealloc;
- (void)executePrologue;
- (void)executeRequestCore:(id*)arg1;
- (id)fetchRequestDescribingObjectsToUpdate;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (bool)isWritingRequest;
- (id)request;
- (id)updateStatement;

@end
