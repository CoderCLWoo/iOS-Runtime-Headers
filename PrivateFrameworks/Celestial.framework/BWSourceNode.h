/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWSourceNode : BWNode {
    <BWSourceNodeErrorDelegate> * _errorDelegate;
}

@property (nonatomic, readonly) struct OpaqueCMClock { }*clock;
@property (nonatomic) <BWSourceNodeErrorDelegate> *errorDelegate;

- (struct OpaqueCMClock { }*)clock;
- (id)errorDelegate;
- (id)nodeType;
- (void)setErrorDelegate:(id)arg1;
- (BOOL)start:(id*)arg1;
- (BOOL)stop:(id*)arg1;

@end
