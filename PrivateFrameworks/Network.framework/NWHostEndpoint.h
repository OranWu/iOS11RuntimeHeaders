/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWHostEndpoint : NWEndpoint

@property (nonatomic, readonly) NSString *hostname;
@property (nonatomic, readonly) NSString *port;

+ (unsigned int)endpointType;
+ (id)endpointWithHostname:(id)arg1 port:(id)arg2;

- (id)descriptionWithIndent:(int)arg1 showFullContent:(bool)arg2;
- (id)hostname;
- (id)port;

@end
