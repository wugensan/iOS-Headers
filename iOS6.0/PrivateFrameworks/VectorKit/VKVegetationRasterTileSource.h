/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKRasterTileSource.h>

@interface VKVegetationRasterTileSource : VKRasterTileSource
{
}

- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (void)fetchTileForKey:(const struct VKTileKey *)arg1;
- (id)tileForKey:(const struct VKTileKey *)arg1;
- (struct VKTileKey)sourceKeyForRenderKey:(const struct VKTileKey *)arg1;
- (unsigned int)mapLayerForZoomLevelRange;
- (int)defaultMinimumZoomLevel;
- (int)defaultMaximumZoomLevel;
- (BOOL)minimumZoomLevelBoundsCamera;
- (BOOL)maximumZoomLevelBoundsCamera;

@end

