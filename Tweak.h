#import <LocalAuthentication/LocalAuthentication.h>
#import <Foundation/Foundation.h>
#import <CaptainHook/CaptainHook.h>
#import <objc/runtime.h>
#import <UIKit/UIKit.h>
#import <YouTubeExtractor/YouTubeExtractor.h>
#import <dlfcn.h>
#import <rootless.h>
#import "Controllers/RootOptionsController.h"
#import "Controllers/PictureInPictureController.h"
#import "Controllers/YouTubeDownloadController.h"
#import "Controllers/ReorderPivotBarController.h"
// YT Headers
#import "YouTubeHeader/ASCollectionElement.h"
#import "YouTubeHeader/ASCollectionView.h"
#import "YouTubeHeader/YTReelModel.h"
#import "YouTubeHeader/ELMCellNode.h"
#import "YouTubeHeader/ELMContainerNode.h"
#import "YouTubeHeader/ELMNodeController.h"
#import "YouTubeHeader/YTIFormattedString.h"
#import "YouTubeHeader/GPBMessage.h"
#import "YouTubeHeader/YTIStringRun.h"
#import "YouTubeHeader/QTMIcon.h"
#import "YouTubeHeader/YTColor.h"
#import "YouTubeHeader/YTColorPalette.h"
#import "YouTubeHeader/YTCommonColorPalette.h"
#import "YouTubeHeader/YTPageStyleController.h"
#import "YouTubeHeader/YTHotConfig.h"
#import "YouTubeHeader/YTVideoQualitySwitchOriginalController.h"
#import "YouTubeHeader/YTVideoWithContextNode.h"
#import "YouTubeHeader/YTIElementRenderer.h"
#import "YouTubeHeader/YTISectionListRenderer.h"
#import "YouTubeHeader/YTWatchNextResultsViewController.h"
#import "YouTubeHeader/YTIMenuConditionalServiceItemRenderer.h"
#import "YouTubeHeader/YTPlaybackStrippedWatchController.h"
#import "YouTubeHeader/YTSlimVideoDetailsActionView.h"
#import "YouTubeHeader/YTSlimVideoScrollableActionBarCellController.h"
#import "YouTubeHeader/YTSlimVideoScrollableDetailsActionsView.h"
#import "YouTubeHeader/YTTouchFeedbackController.h"
#import "YouTubeHeader/YTWatchViewController.h"
// YT Headers - snackbar
#import "YouTubeHeader/YTHUDMessage.h"
#import "YouTubeHeader/GOOHUDManagerInternal.h"


@interface YTITopbarLogoRenderer : NSObject // Enable Premium logo - @bhackel
@property(readonly, nonatomic) YTIIcon *iconImage;
@end
