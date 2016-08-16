//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class GameCenterInstalledMore, NSArray, UIScrollView;
@protocol GameCenterRecentGamesCellDelegate;

@interface GameCenterRecentGamesCell : MMTableViewCell
{
    UIScrollView *_scrollView;
    id <GameCenterRecentGamesCellDelegate> _delegate;
    NSArray *_recentGames;
    GameCenterInstalledMore *_installedMore;
    double _nameLabelBottom;
}

+ (double)heightOfCellWidthRecentGames:(id)arg1;
@property(nonatomic) double nameLabelBottom; // @synthesize nameLabelBottom=_nameLabelBottom;
@property(retain, nonatomic) GameCenterInstalledMore *installedMore; // @synthesize installedMore=_installedMore;
@property(retain, nonatomic) NSArray *recentGames; // @synthesize recentGames=_recentGames;
@property(nonatomic) __weak id <GameCenterRecentGamesCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onInstalledMoreClicked:(id)arg1;
- (void)onGameIconClicked:(id)arg1;
- (id)makeRecentGameTile:(id)arg1 index:(unsigned int)arg2;
- (double)addGameTiles;
- (id)makeBasicView:(int)arg1 GameInfo:(id)arg2 Index:(unsigned int)arg3;
- (double)addInstalledMore:(double)arg1;
- (void)initSubviews;
- (void)setCellData:(id)arg1 InstalledMore:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
