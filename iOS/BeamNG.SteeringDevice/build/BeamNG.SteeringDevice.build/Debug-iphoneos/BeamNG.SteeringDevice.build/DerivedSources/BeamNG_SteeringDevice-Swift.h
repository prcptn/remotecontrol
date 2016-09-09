// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.8 clang-703.0.31)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import ObjectiveC;
@import CoreGraphics;
@import CoreFoundation;
#endif

#import "/Users/Hondune/Desktop/Work And Stuff/BeamNG Work/remotecontrol/iOS/BeamNG.SteeringDevice/BeamNG.SteeringDevice/BeamNG.SteeringDevice-Bridging-Header.h"

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;
@class NSObject;

SWIFT_CLASS("_TtC21BeamNG_SteeringDevice11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary * _Nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * _Null_unspecified)application;
- (void)applicationDidEnterBackground:(UIApplication * _Null_unspecified)application;
- (void)applicationWillEnterForeground:(UIApplication * _Null_unspecified)application;
- (void)applicationDidBecomeActive:(UIApplication * _Null_unspecified)application;
- (void)applicationWillTerminate:(UIApplication * _Null_unspecified)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21BeamNG_SteeringDevice9PSCarData")
@interface PSCarData : NSObject
@property (nonatomic) float speed;
@property (nonatomic) float rpm;
@property (nonatomic) float fuel;
@property (nonatomic) float temperature;
@property (nonatomic) NSInteger gear;
@property (nonatomic) NSInteger distance;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class CAShapeLayer;
@class NSCoder;

SWIFT_CLASS("_TtC21BeamNG_SteeringDevice13PSProgressBar")
@interface PSProgressBar : UIView
@property (nonatomic, strong) CAShapeLayer * _Null_unspecified progressLayer;
@property (nonatomic, strong) CAShapeLayer * _Null_unspecified progressLayer2;
@property (nonatomic) CGFloat _progress;
@property (nonatomic) CGFloat progress;
@property (nonatomic) CGFloat angleBegin;
@property (nonatomic) CGFloat angleEnd;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (void)draw:(CGFloat)startAngle endAngle:(CGFloat)endAngle lineWidth:(CGFloat)lineWidth strokeColor:(CGColorRef _Nonnull)strokeColor clockwise:(BOOL)clockwise;
@end

@class AsyncUdpSocket;
@class NSError;
@class NSData;

SWIFT_CLASS("_TtC21BeamNG_SteeringDevice11PSSearching")
@interface PSSearching : NSObject <AsyncUdpSocketDelegate>
@property (nonatomic, strong) AsyncUdpSocket * _Null_unspecified socket;
@property (nonatomic, strong) AsyncUdpSocket * _Null_unspecified listenSocket;
@property (nonatomic, copy) void (^ _Null_unspecified onConnectToHost)(NSString * _Nonnull, uint16_t);
@property (nonatomic) NSInteger code;
@property (nonatomic) BOOL initCon;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithConnectionHandler:(void (^ _Nonnull)(NSString * _Nonnull, uint16_t))connectionHandler;
- (void)broadcast:(CFTimeInterval)timeout;
- (void)onUdpSocket:(AsyncUdpSocket * _Null_unspecified)sock didNotReceiveDataWithTag:(NSInteger)tag dueToError:(NSError * _Null_unspecified)error;
- (void)onUdpSocket:(AsyncUdpSocket * _Null_unspecified)sock didNotSendDataWithTag:(NSInteger)tag dueToError:(NSError * _Null_unspecified)error;
- (BOOL)onUdpSocket:(AsyncUdpSocket * _Null_unspecified)sock didReceiveData:(NSData * _Null_unspecified)data withTag:(NSInteger)tag fromHost:(NSString * _Null_unspecified)host port:(uint16_t)port;
- (void)onUdpSocket:(AsyncUdpSocket * _Null_unspecified)sock didSendDataWithTag:(NSInteger)tag;
- (void)onUdpSocketDidClose:(AsyncUdpSocket * _Null_unspecified)sock;
@end

@class CMMotionManager;
@class UIButton;
@class UIImage;
@class UIImageView;
@class UILabel;
@class NSBundle;

SWIFT_CLASS("_TtC21BeamNG_SteeringDevice23PSSessionViewController")
@interface PSSessionViewController : UIViewController
@property (nonatomic, strong) PSSearching * _Null_unspecified searching;
@property (nonatomic, strong) CMMotionManager * _Null_unspecified cm;
@property (nonatomic, strong) UIButton * _Null_unspecified connectionButton;
@property (nonatomic, strong) CAShapeLayer * _Null_unspecified steeringWheelLayer;
@property (nonatomic, strong) UIView * _Null_unspecified steeringWheelView;
@property (nonatomic, strong) PSProgressBar * _Null_unspecified speed;
@property (nonatomic, strong) PSProgressBar * _Null_unspecified rpm;
@property (nonatomic, strong) PSProgressBar * _Null_unspecified fuel;
@property (nonatomic, strong) PSProgressBar * _Null_unspecified temperature;
@property (nonatomic, strong) UIView * _Null_unspecified hudView;
@property (nonatomic, strong) UIImage * _Null_unspecified hudImage;
@property (nonatomic, strong) UIImageView * _Null_unspecified hudImageView;
@property (nonatomic, strong) UILabel * _Null_unspecified labelSpeed;
@property (nonatomic, strong) UILabel * _Null_unspecified labelGear;
@property (nonatomic, strong) UILabel * _Null_unspecified labelDist;
@property (nonatomic, strong) UIButton * _Null_unspecified buttonAccelerate;
@property (nonatomic, strong) UIButton * _Null_unspecified buttonBrake;
- (void)viewDidLoad;
- (void)onConnected:(NSString * _Nonnull)toHost onPort:(uint16_t)onPort;
- (void)onDisconnected:(NSError * _Nonnull)error;
- (void)onButtonConnect;
- (void)onButtonAccelerate0;
- (void)onButtonAccelerate1;
- (void)onButtonBrake0;
- (void)onButtonBrake1;
- (BOOL)shouldAutorotate;
- (UIInterfaceOrientationMask)supportedInterfaceOrientations;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21BeamNG_SteeringDevice11PSSteerData")
@interface PSSteerData : NSObject
@property (nonatomic) float acceleration;
@property (nonatomic) float brake;
@property (nonatomic) float steer;
@property (nonatomic) float id;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop