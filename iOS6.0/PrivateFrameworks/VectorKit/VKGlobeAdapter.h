/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "VKLabelManagerDelegate-Protocol.h"

@class VKDebugModel, VKGlobeViewWrapper, VKLabelFeaturePool, VKLabelManager, VKScene, VKStylesheet, VKTrafficIncidentsMapModel;

@interface VKGlobeAdapter : NSObject <VKLabelManagerDelegate>
{
    VKGlobeViewWrapper *_globeViewWrapper;
    VKLabelManager *_labelManager;
    VKTrafficIncidentsMapModel *_incidentMapModel;
    VKDebugModel *_debugModel;
    VKScene *_scene;
    VKScene *_incidentScene;
    VKLabelFeaturePool *_featurePool;
    VKStylesheet *_stylesheet;
    BOOL _localizeLabels;
    id <VKGlobeAdapterDelegate> _delegate;
    CDStruct_31142d93 _focusPoint;
    CDStruct_2c43369c _focusCoordinate;
    struct vector<std::__1::weak_ptr<altitude::LabelData>, vk_allocator<std::__1::weak_ptr<altitude::LabelData>>> _activeLabelData;
    struct vector<std::__1::weak_ptr<altitude::TrafficTile>, vk_allocator<std::__1::weak_ptr<altitude::TrafficTile>>> _activeTrafficTiles;
    BOOL _labelMarkerSelectionEnabled;
    int _labelScaleFactor;
}

@property(retain, nonatomic) VKTrafficIncidentsMapModel *trafficIncidentsMapModel; // @synthesize trafficIncidentsMapModel=_incidentMapModel;
@property(nonatomic) id <VKGlobeAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)labelManager:(id)arg1 setNeedsDisplay:(BOOL)arg2;
- (void)labelManager:(id)arg1 setNeedsLayout:(BOOL)arg2;
- (void)labelManager:(id)arg1 didDeselectLabelMarker:(id)arg2;
- (void)labelManager:(id)arg1 labelMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)labelManager:(id)arg1 willSelectLabelMarker:(id)arg2;
- (id)calloutController;
- (void)setCalloutController:(id)arg1;
- (void)deselectLabelMarkerAnimated:(BOOL)arg1;
- (id)selectedLabelMarker;
- (void)selectLabelMarker:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect)arg3;
- (id)labelMarkerForSelectionAtPoint:(struct CGPoint)arg1 pointLabelsOnly:(BOOL)arg2;
- (void)debugHighlightLabelAtScreenPoint:(struct CGPoint)arg1 viewTransform:(id)arg2;
- (BOOL)hasOcclusionAtLocalPoint:(CDStruct_6e3f967a)arg1 inLabelTile:(id)arg2;
- (void)drawWithContext:(id)arg1;
- (void)layoutWithContext:(id)arg1;
- (void)computeActiveTileSet:(unsigned int)arg1;
- (id)_newMapTileForLabelTile:(id)arg1 layer:(unsigned int)arg2;
@property(nonatomic) BOOL localizeLabels; // @synthesize localizeLabels=_localizeLabels;
@property(nonatomic) BOOL labelMarkerSelectionEnabled; // @synthesize labelMarkerSelectionEnabled=_labelMarkerSelectionEnabled;
@property(nonatomic) int labelScaleFactor; // @synthesize labelScaleFactor=_labelScaleFactor;
- (void)setFocusPoint:(CDStruct_31142d93)arg1 coordinate:(CDStruct_c3b9c2ee)arg2;
- (void)didTapZoom;
- (void)willTapZoom;
- (void)setStylesheet:(id)arg1;
- (void)flushLabelTiles;
- (void)setGlobeViewWrapper:(id)arg1;
- (void)_updateTrafficManagerCallbacks;
- (void)_updateLabelDataManagerCallbacks;
- (void)dealloc;
- (id)initWithCanvas:(id)arg1 camera:(id)arg2 mapType:(int)arg3;

@end

