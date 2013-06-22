/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibrary/PLUIEditImageViewController.h>

#import "UIActionSheetDelegate-Protocol.h"

@class NSArray, NSString, PLWallpaperNavigationItem, UIActionSheet;

@interface PLWallpaperImageViewController : PLUIEditImageViewController <UIActionSheetDelegate>
{
    PLWallpaperNavigationItem *_navItem;
    int _wallpaperMode;
    NSArray *_navigationToolbarItems;
    BOOL _saveWallpaperData;
    NSString *_wallpaperTitle;
    UIActionSheet *_wallpaperOptionsSheet;
    unsigned int _didSetImageMode:1;
}

+ (void)setWallpaperFromArgs:(id)arg1;
+ (id)argsForSavingWallpaperFromTile:(id)arg1 mode:(int)arg2;
@property(copy, nonatomic) NSString *wallpaperTitle; // @synthesize wallpaperTitle=_wallpaperTitle;
@property(nonatomic) BOOL saveWallpaperData; // @synthesize saveWallpaperData=_saveWallpaperData;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)_setImageAsHomeScreenAndLockScreenClicked:(id)arg1;
- (void)_setImageAsLockScreenClicked:(id)arg1;
- (void)_setImageAsHomeScreenClicked:(id)arg1;
- (void)_cropWallpaperFinished:(id)arg1;
- (void)_backgroundCropWallpaper:(id)arg1;
- (void)_savePhoto;
- (void)_updateTitles;
- (BOOL)uiipc_useTelephonyUI;
- (void)_adjustScrollViewGeometry;
- (int)imageFormat;
- (BOOL)clientIsWallpaper;
- (void)setupNavigationItem;
- (void)loadView;
- (unsigned int)_tileAutoresizingMask;
- (unsigned int)_contentAutoresizingMask;
- (struct CGRect)_viewFrame;
- (void)photoTileViewControllerRequestsFullScreenImage:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)dealloc;
- (id)navigationItem;
- (int)cropOverlayMode;
- (id)initWithUIImage:(id)arg1;
- (id)init;

@end

