//
//  TuSDKPFCameraOptions.h
//  TuSDK
//
//  Created by Clear Hu on 14/11/6.
//  Copyright (c) 2014年 Lasque. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>
#import "TuSDKCPResultOptions.h"
#import "TuSDKPFCameraViewController.h"

/**
 *  默认相机视图控制器选项
 */
@interface TuSDKPFCameraOptions : TuSDKCPResultOptions
/**
 *  视图类 (默认:TuSDKPFCameraView, 需要继承 TuSDKPFCameraView)
 */
@property (nonatomic, strong) Class viewClazz;

/**
 *  默认相机控制栏视图类 (默认:TuSDKPFCameraConfigView, 需要继承 TuSDKPFCameraConfigView)
 */
@property (nonatomic, strong) Class configBarViewClazz;

/**
 *  默认相机底部栏视图类 (默认:TuSDKPFCameraBottomView, 需要继承 TuSDKPFCameraBottomView)
 */
@property (nonatomic, strong) Class bottomBarViewClazz;

/**
 *  闪光灯视图类 (默认:TuSDKPFCameraFlashView, 需要继承 TuSDKPFCameraFlashView)
 */
@property (nonatomic, strong) Class flashViewClazz;

/**
 *  滤镜视图类 (默认:TuSDKPFCameraFilterView, 需要继承 TuSDKPFCameraFilterView)
 */
@property (nonatomic, strong) Class filterViewClazz;

/**
 *  聚焦触摸视图类 (默认:TuSDKICFocusTouchView, 需要继承 TuSDKICFocusTouchView)
 */
@property (nonatomic, strong) Class focusTouchViewClazz;

/**
 *  摄像头前后方向 (默认为后置优先)
 */
@property (nonatomic) AVCaptureDevicePosition cameraPostion;

/**
 *  闪光灯模式 (默认:AVCaptureFlashModeOff)
 */
@property (nonatomic) AVCaptureFlashMode cameraDefaultFlashMode;

/**
 *  摄像头分辨率模式 (默认：AVCaptureSessionPresetHigh)
 *  @see AVCaptureSession for acceptable values
 */
@property (nonatomic, copy) NSString *sessionPreset;

/**
 *  是否开启滤镜支持 (默认: 关闭)
 */
@property (nonatomic) BOOL enableFilters;

/**
 *  视频视图显示比例 (默认:0.75f, 0 < cameraViewRatio <= 1)
 */
@property (nonatomic) CGFloat cameraViewRatio;

/**
 *  是否开启长按拍摄 (默认: NO)
 */
@property (nonatomic) BOOL enableLongTouchCapture;

/**
 *  开启持续自动对焦 (默认: NO)
 */
@property (nonatomic) BOOL enableContinueFoucs;

/**
 *  自动聚焦延时 (默认: 5秒)
 */
@property (nonatomic) NSTimeInterval autoFoucsDelay;

/**
 *  长按延时 (默认: 1.2秒)
 */
@property (nonatomic) NSTimeInterval longTouchDelay;

/**
 *  创建系统相机控制器对象
 *
 *  @return 系统相机控制器对象
 */
- (TuSDKPFCameraViewController *)viewController;
@end