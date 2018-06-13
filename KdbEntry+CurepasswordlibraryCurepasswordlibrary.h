#import <Foundation/Foundation.h>
#import "kpass.h"
#import "Database.h"
#import "KdbEntry.h"
#import "KdbGroup.h"
#import "KdbEntry.h"
#import "KdbEntry+Curepasswordlibrary.h"

@interface KdbEntry (CurepasswordlibraryCurepasswordlibrary)
- (void)initWithEntry:(kpass_entry*)entry curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)initWithParent:(KdbGroup*)parentGroup withTitle:(NSString*)title withIcon:(uint32_t)icon withUsername:(NSString*)username withPassword:(NSString*)password withUrl:(NSString*)url withNotes:(NSString*)notes withExpires:(NSDate*)expires forDatabase:(id<Database>)db curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)kpEntryCurepasswordlibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)entryNameCurepasswordlibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)entryIconCurepasswordlibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)entryUrlCurepasswordlibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)entryUsernameCurepasswordlibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)entryPasswordCurepasswordlibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)entryNotesCurepasswordlibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)createdDateCurepasswordlibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)modifiedDateCurepasswordlibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)accessDateCurepasswordlibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)expireDateCurepasswordlibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)updateWithParent:(KdbGroup*)parentGroup withTitle:(NSString*)title withIcon:(uint32_t)icon withUsername:(NSString*)username withPassword:(NSString*)password withUrl:(NSString*)url withNotes:(NSString*)notes withExpires:(NSDate*)expires curepasswordLibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;
- (void)deallocCurepasswordlibrary:(NSString *)curepasswordLibrary curepasswordLibrary:(NSString *)curepasswordLibrary;

@end
