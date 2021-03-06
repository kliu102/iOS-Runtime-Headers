/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString;

@interface BWPipelineStage : NSObject {
    NSObject<OS_dispatch_group> *_executionGroup;
    NSObject<OS_dispatch_queue> *_executionQueue;
    NSMutableArray *_inputsForQueuedMessages;
    NSString *_name;
    NSMutableArray *_queuedMessages;
}

@property(readonly) NSString * name;

+ (id)_currentPipelineStage;
+ (void)_setCurrentPipelineStage:(id)arg1;
+ (void)initialize;
+ (id)pipelineStageWithName:(id)arg1 priority:(unsigned int)arg2 discardsLateSampleData:(BOOL)arg3;
+ (id)pipelineStageWithName:(id)arg1 priority:(unsigned int)arg2;

- (id)_initWithName:(id)arg1 priority:(unsigned int)arg2 discardsLateSampleData:(BOOL)arg3;
- (BOOL)_isCurrentPipelineStage;
- (void)_serviceQueuedMessages;
- (void)dealloc;
- (id)description;
- (id)name;
- (void)sendMessage:(id)arg1 toInput:(id)arg2;

@end
