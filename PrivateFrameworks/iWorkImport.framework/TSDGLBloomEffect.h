/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDGLDataBuffer, TSDGLFrameBuffer, TSDGLShader;

@interface TSDGLBloomEffect : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    TSDGLShader *_bloomShader;
    } _blurBufferSize;
    TSDGLDataBuffer *_blurDataBuffer;
    TSDGLFrameBuffer *_blurFramebuffer;
    TSDGLShader *_blurHorizontalShader;
    TSDGLDataBuffer *_blurTransferDataBuffer;
    TSDGLShader *_blurVerticalShader;
    TSDGLFrameBuffer *_colorFramebuffer;
    TSDGLDataBuffer *_dataBuffer;
    } _effectSize;
    TSDGLShader *_fboTransferShader;
    BOOL _oldViewportRectInitialized;
    int _oldViewportRect[4];
}

- (void)bindFramebuffer;
- (void)dealloc;
- (void)drawBloomEffectWithMVPMatrix:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1 bloomAmount:(float)arg2 currentGLFramebuffer:(int)arg3 GLState:(id)arg4;
- (id)initWithEffectSize:(struct CGSize { float x1; float x2; })arg1 blurScale:(float)arg2;
- (void)p_blurColorBufferWithPreviousFramebuffer:(int)arg1 GLState:(id)arg2;
- (void)p_setupBuffers;
- (void)p_setupShaders;
- (void)teardown;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;

@end
