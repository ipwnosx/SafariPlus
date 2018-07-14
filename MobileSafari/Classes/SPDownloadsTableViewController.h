// SPDownloadsTableViewController.h
// (c) 2018 opa334

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#import "SPFileBrowserTableViewController.h"

@class SPDownload;

@interface UIApplication(iOS10)
- (void)openURL:(id)arg1 options:(id)arg2 completionHandler:(id)arg3;
@end

@interface SPDownloadsTableViewController : SPFileBrowserTableViewController <UIDocumentInteractionControllerDelegate> {}
@property (nonatomic) NSMutableArray* downloadsAtCurrentPath;
@property (nonatomic, strong) UIDocumentInteractionController* documentController;
- (id)newCellWithDownload:(SPDownload*)download;
- (void)startPlayerWithMedia:(NSURL*)mediaURL;
- (void)openScheme:(NSString *)scheme;
@end
