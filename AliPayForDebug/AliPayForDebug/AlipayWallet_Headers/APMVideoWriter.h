//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, EAGLContext, NSDate, NSString, NSURL, UIImage;
@protocol APMVideoWriterDelegate, OS_dispatch_queue;

@interface APMVideoWriter : NSObject
{
    AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor;
    struct __CVBuffer *_pixelbufferRef;
    struct __CVOpenGLESTextureCache *_textureCacheRef;
    struct __CVBuffer *_textureRef;
    unsigned int _position;
    unsigned int _inputTextureCoordinate;
    int _inputImageTexture;
    unsigned int _program;
    unsigned int _vertShader;
    unsigned int _fragShader;
    unsigned int _movieFramebuffer;
    float _imageVertices[8];
    float _textureCoordinates[8];
    _Bool _renderingEnabled;
    _Bool _captureThumbnailWhenStartRecording;
    _Bool _needsMirrored;
    _Bool _inputTextureOpenGLCoordinatesSystem;
    _Bool _shouldOptimizeForNetworkUse;
    _Bool _haveStartedSession;
    _Bool _startWritingVideo;
    int _bitrate;
    int _fps;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id <APMVideoWriterDelegate> _delegate;
    NSURL *_outputVideoURL;
    UIImage *_thumbnail;
    long long _orientation;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_audioInput;
    AVAssetWriterInput *_videoInput;
    NSString *_profileLevel;
    long long _status;
    NSDate *_lastFrameTime;
    long long _frameNum;
    EAGLContext *_context;
    struct CGSize _inputSize;
    struct CGSize _outputSize;
}

+ (id)cannotSetupInputError;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
@property(nonatomic) long long frameNum; // @synthesize frameNum=_frameNum;
@property(retain, nonatomic) NSDate *lastFrameTime; // @synthesize lastFrameTime=_lastFrameTime;
@property(nonatomic) _Bool startWritingVideo; // @synthesize startWritingVideo=_startWritingVideo;
@property(nonatomic) _Bool haveStartedSession; // @synthesize haveStartedSession=_haveStartedSession;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *profileLevel; // @synthesize profileLevel=_profileLevel;
@property(retain, nonatomic) AVAssetWriterInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain, nonatomic) AVAssetWriterInput *audioInput; // @synthesize audioInput=_audioInput;
@property(retain, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(nonatomic) _Bool shouldOptimizeForNetworkUse; // @synthesize shouldOptimizeForNetworkUse=_shouldOptimizeForNetworkUse;
@property(nonatomic, getter=isInputTextureOpenGLCoordinatesSystem) _Bool inputTextureOpenGLCoordinatesSystem; // @synthesize inputTextureOpenGLCoordinatesSystem=_inputTextureOpenGLCoordinatesSystem;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) _Bool needsMirrored; // @synthesize needsMirrored=_needsMirrored;
@property(nonatomic) int fps; // @synthesize fps=_fps;
@property(nonatomic) int bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(nonatomic) struct CGSize inputSize; // @synthesize inputSize=_inputSize;
@property(nonatomic) _Bool captureThumbnailWhenStartRecording; // @synthesize captureThumbnailWhenStartRecording=_captureThumbnailWhenStartRecording;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) NSURL *outputVideoURL; // @synthesize outputVideoURL=_outputVideoURL;
@property(nonatomic) __weak id <APMVideoWriterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
- (void).cxx_destruct;
@property _Bool renderingEnabled;
- (void)delegateForDidFailWithError:(id)arg1;
- (void)delegateForDidFinishWriting;
- (_Bool)isFrameSkip;
- (void)checkAndCaptureThumbnail;
- (void)updateTextureCoordinates;
- (void)updateImageVertices;
- (void)teardownAssetWriterAndInputs;
- (id)stringForStatus:(long long)arg1;
- (void)transitionToStatus:(long long)arg1 error:(id)arg2;
- (void)teardownOpenGL;
- (void)setupGL;
- (void)render:(unsigned int)arg1;
- (void)createFBO;
- (id)audioOuputSetting;
- (id)videoOuputSetting;
- (_Bool)setupAudioInput;
- (_Bool)setupVideoInput;
- (_Bool)setupWriter;
- (void)finishRecording:(_Bool)arg1;
- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)appendVideoWithPixelBufferBlock:(CDUnknownBlockType)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)appendVideoPixelBuffer:(unsigned int)arg1 context:(id)arg2 time:(CDStruct_1b6d18a9)arg3;
- (_Bool)prepareToRecord;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end
