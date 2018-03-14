/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKCDADocumentShareItemSource : UIActivityItemProvider {
    HKCDADocumentSample * _documentSample;
    NSURL * _exportArchiveURL;
    HKCDAPDFGenerator * _generator;
    HKHealthStore * _healthStore;
    NSData * _shareData;
}

@property (nonatomic, readonly) HKCDADocumentSample *documentSample;
@property (nonatomic, readonly) NSURL *exportArchiveURL;
@property (nonatomic, readonly) HKCDAPDFGenerator *generator;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) NSData *shareData;

- (void).cxx_destruct;
- (void)_buildZipArchiveWithCDA:(id)arg1 generatedPDF:(id)arg2 completion:(id /* block */)arg3;
- (void)_generatePDFforCDA:(id)arg1 completion:(id /* block */)arg2;
- (void)_loadShareDataWithHealthStore:(id)arg1 completion:(id /* block */)arg2;
- (id)_simpleError:(id)arg1;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (void)dealloc;
- (id)documentSample;
- (id)exportArchiveURL;
- (id)generator;
- (id)healthStore;
- (id)initWithDocumentSample:(id)arg1 healthStore:(id)arg2;
- (id)item;
- (id)shareData;

@end