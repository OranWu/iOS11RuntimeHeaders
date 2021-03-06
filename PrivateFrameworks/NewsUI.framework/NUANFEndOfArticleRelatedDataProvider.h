/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUANFEndOfArticleRelatedDataProvider : NSObject {
    FCArticle * _article;
    NUANFEndOfArticleFeedDataProvider * _feedDataProvider;
    NUEndOfArticleSettings * _settings;
    NUANFEndOfArticleTopicDataProvider * _topicsDataProvider;
}

@property (nonatomic, readonly) FCArticle *article;
@property (nonatomic, readonly) NUANFEndOfArticleFeedDataProvider *feedDataProvider;
@property (nonatomic, readonly, copy) NUEndOfArticleSettings *settings;
@property (nonatomic, readonly) NUANFEndOfArticleTopicDataProvider *topicsDataProvider;

- (void).cxx_destruct;
- (id)article;
- (id)feedDataProvider;
- (id)initWithArticle:(id)arg1 settings:(id)arg2 streamHeadlines:(id)arg3 topics:(id)arg4;
- (id)settings;
- (id)topicsDataProvider;

@end
