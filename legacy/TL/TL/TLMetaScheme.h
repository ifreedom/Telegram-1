#import "TLupdates_Difference.h"
#import "TLNewSession.h"
#import "TLInputPhoto.h"
#import "TLmessages_StatedMessages.h"
#import "TLPeer.h"
#import "TLDecryptedMessage.h"
#import "TLInputUser.h"
#import "TLGeoChatMessage.h"
#import "TLInputFileLocation.h"
#import "TLPong.h"
#import "TLPhoto.h"
#import "TLImportedContact.h"
#import "NSArray_ContactFound.h"
#import "TLBadMsgNotification.h"
#import "TLDestroySessionsRes.h"
#import "TLmessages_AffectedHistory.h"
#import "TLInputEncryptedChat.h"
#import "TLInputPhoneCall.h"
#import "TLMsgResendReq.h"
#import "TLInputEncryptedFile.h"
#import "TLcontacts_Link.h"
#import "TLMsgsStateInfo.h"
#import "TLWallPaper.h"
#import "NSArray_SchemeMethod.h"
#import "TLInputChatPhoto.h"
#import "TLProtoMessage.h"
#import "TLServer_DH_inner_data.h"
#import "TLUpdate.h"
#import "TLFileLocation.h"
#import "TLAudio.h"
#import "TLDcNetworkStats.h"
#import "TLRpcError.h"
#import "NSArray_Photo.h"
#import "TLMessage.h"
#import "TLDecryptedMessageAction.h"
#import "TLChatParticipants.h"
#import "TLClient_DH_Inner_Data.h"
#import "TLInputNotifyPeer.h"
#import "TLInputAudio.h"
#import "NSArray_EncryptedMessage.h"
#import "TLgeochats_StatedMessage.h"
#import "TLProtoMessageCopy.h"
#import "TLcontacts_Blocked.h"
#import "NSArray_GeoChatMessage.h"
#import "TLGlobalPrivacySettings.h"
#import "TLmessages_DhConfig.h"
#import "TLInvokeWithLayer15.h"
#import "NSArray_DcOption.h"
#import "TLDocument.h"
#import "TLInputVideo.h"
#import "TLConfig.h"
#import "TLMessagesFilter.h"
#import "TLcontacts_Found.h"
#import "TLauth_Authorization.h"
#import "TLContactStatus.h"
#import "TLInputMedia.h"
#import "TLmessages_SentEncryptedMessage.h"
#import "TLUserFull.h"
#import "NSArray_ContactStatus.h"
#import "TLDialog.h"
#import "TLChat.h"
#import "TLContactRequest.h"
#import "TLInputGeoChat.h"
#import "TLSet_client_DH_params_answer.h"
#import "TLauth_SentCode.h"
#import "TLContactBlocked.h"
#import "TLcontacts_MyLink.h"
#import "TLphone_DhConfig.h"
#import "TLgeochats_Messages.h"
#import "NSArray_DcNetworkStats.h"
#import "NSArray_Message.h"
#import "TLInputGeoPlaceName.h"
#import "NSArray_Dialog.h"
#import "TLUserStatus.h"
#import "TLVideo.h"
#import "TLChatLocated.h"
#import "TLEncryptedChat.h"
#import "NSArray_ImportedContact.h"
#import "TLContactFound.h"
#import "NSArray_InputContact.h"
#import "NSArray_Update.h"
#import "TLDcOption.h"
#import "TLInputPeer.h"
#import "TLmessages_Dialogs.h"
#import "NSArray_ContactRequest.h"
#import "TLSchemeMethod.h"
#import "TLInputPeerNotifySettings.h"
#import "TLGeoPlaceName.h"
#import "NSArray_Chat.h"
#import "TLauth_CheckedPhone.h"
#import "TLInputDocument.h"
#import "TLMsgsStateReq.h"
#import "TLSchemeParam.h"
#import "TLPeerNotifySettings.h"
#import "TLphotos_Photos.h"
#import "NSArray_ContactBlocked.h"
#import "TLGeoPoint.h"
#import "NSArray_PhotoSize.h"
#import "TLChatParticipant.h"
#import "TLmessages_StatedMessage.h"
#import "TLScheme.h"
#import "TLauth_ExportedAuthorization.h"
#import "TLContact.h"
#import "TLstorage_FileType.h"
#import "TLInitConnection.h"
#import "TLupdates_State.h"
#import "TLContactSuggested.h"
#import "TLInputPeerNotifyEvents.h"
#import "TLupload_File.h"
#import "TLmessages_Messages.h"
#import "TLcontacts_ImportedContacts.h"
#import "TLcontacts_Located.h"
#import "NSArray_string.h"
#import "TLServer_DH_Params.h"
#import "TLcontacts_ForeignLink.h"
#import "TLEncryptedFile.h"
#import "TLP_Q_inner_data.h"
#import "TLUpdates.h"
#import "TLInvokeAfterMsg.h"
#import "TLChatFull.h"
#import "TLChatPhoto.h"
#import "NSArray_SchemeType.h"
#import "NSArray_User.h"
#import "TLMessageAction.h"
#import "TLmessages_Message.h"
#import "TLRpcDropAnswer.h"
#import "TLUser.h"
#import "NSArray_Contact.h"
#import "TLhelp_AppUpdate.h"
#import "TLmessages_ChatFull.h"
#import "TLInputPhotoCrop.h"
#import "TLcontacts_SentLink.h"
#import "TLEncryptedMessage.h"
#import "TLMsgsAllInfo.h"
#import "TLMsgDetailedInfo.h"
#import "NSArray_int.h"
#import "TLDecryptedMessageMedia.h"
#import "TLContactLocated.h"
#import "NSArray_InputUser.h"
#import "TLNotifyPeer.h"
#import "TLgeochats_Located.h"
#import "TLPhoneCall.h"
#import "TLInputGeoPoint.h"
#import "TLmessages_Chat.h"
#import "TLPhotoSize.h"
#import "NSArray_long.h"
#import "TLSchemeType.h"
#import "TLInputFile.h"
#import "TLDestroySessionRes.h"
#import "TLHttpWait.h"
#import "TLcontacts_Requests.h"
#import "TLhelp_InviteText.h"
#import "TLUserProfilePhoto.h"
#import "NSArray_ContactSuggested.h"
#import "TLError.h"
#import "TLNearestDc.h"
#import "TLPhoneConnection.h"
#import "NSArray_InputPhoto.h"
#import "TLphotos_Photo.h"
#import "TLMsgsAck.h"
#import "NSArray_WallPaper.h"
#import "TLhelp_AppPrefs.h"
#import "NSArray_ContactLocated.h"
#import "NSArray_ChatLocated.h"
#import "TLResPQ.h"
#import "TLPeerNotifyEvents.h"
#import "NSArray_DestroySessionRes.h"
#import "NSArray_ChatParticipant.h"
#import "TLMessageMedia.h"
#import "TLhelp_Support.h"
#import "TLInputContact.h"
#import "TLcontacts_Suggested.h"
#import "TLmessages_Chats.h"
#import "TLFutureSalt.h"
#import "NSArray_SchemeParam.h"
#import "NSArray_contacts_Link.h"
#import "TLResponseIndirect.h"
#import "TLmessages_SentMessage.h"
#import "TLcontacts_Contacts.h"
#import "TLRPCreq_pq.h"
#import "TLRPCreq_DH_params.h"
#import "TLRPCset_client_DH_params.h"
#import "TLRPCping.h"
#import "TLRPCping_delay_disconnect.h"
#import "TLRPCdestroy_session.h"
#import "TLRPCdestroy_sessions.h"
#import "TLRPCget_future_salts.h"
#import "TLRPCrpc_drop_answer.h"
#import "TLRPCauth_checkPhone.h"
#import "TLRPCauth_sendCall.h"
#import "TLRPCauth_signUp.h"
#import "TLRPCauth_signIn.h"
#import "TLRPCauth_logOut.h"
#import "TLRPCauth_resetAuthorizations.h"
#import "TLRPCauth_sendInvites.h"
#import "TLRPCauth_exportAuthorization.h"
#import "TLRPCauth_importAuthorization.h"
#import "TLRPCaccount_unregisterDevice.h"
#import "TLRPCaccount_updateNotifySettings.h"
#import "TLRPCaccount_getNotifySettings.h"
#import "TLRPCaccount_resetNotifySettings.h"
#import "TLRPCaccount_updateGlobalPrivacySettings.h"
#import "TLRPCaccount_getGlobalPrivacySettings.h"
#import "TLRPCaccount_updateProfile.h"
#import "TLRPCaccount_updateStatus.h"
#import "TLRPCaccount_getWallPapers.h"
#import "TLRPCusers_getUsers.h"
#import "TLRPCusers_getFullUser.h"
#import "TLRPCcontacts_getContactIDs.h"
#import "TLRPCcontacts_getStatuses.h"
#import "TLRPCcontacts_getContacts.h"
#import "TLRPCcontacts_getRequests.h"
#import "TLRPCcontacts_getLink.h"
#import "TLRPCcontacts_importContacts.h"
#import "TLRPCcontacts_search.h"
#import "TLRPCcontacts_getLocated.h"
#import "TLRPCcontacts_getSuggested.h"
#import "TLRPCcontacts_sendRequest.h"
#import "TLRPCcontacts_acceptRequest.h"
#import "TLRPCcontacts_declineRequest.h"
#import "TLRPCcontacts_deleteContact.h"
#import "TLRPCcontacts_clearContact.h"
#import "TLRPCcontacts_deleteContacts.h"
#import "TLRPCcontacts_block.h"
#import "TLRPCcontacts_unblock.h"
#import "TLRPCcontacts_getBlocked.h"
#import "TLRPCmessages_getMessages.h"
#import "TLRPCmessages_getDialogs.h"
#import "TLRPCmessages_getHistory.h"
#import "TLRPCmessages_search.h"
#import "TLRPCmessages_readHistory.h"
#import "TLRPCmessages_deleteHistory.h"
#import "TLRPCmessages_deleteMessages.h"
#import "TLRPCmessages_restoreMessages.h"
#import "TLRPCmessages_receivedMessages.h"
#import "TLRPCmessages_setTyping.h"
#import "TLRPCmessages_sendMessage.h"
#import "TLRPCmessages_sendMedia.h"
#import "TLRPCmessages_forwardMessages.h"
#import "TLRPCmessages_getChats.h"
#import "TLRPCmessages_getFullChat.h"
#import "TLRPCmessages_editChatTitle.h"
#import "TLRPCmessages_editChatPhoto.h"
#import "TLRPCmessages_addChatUser.h"
#import "TLRPCmessages_deleteChatUser.h"
#import "TLRPCmessages_createChat.h"
#import "TLRPCphone_getDhConfig.h"
#import "TLRPCphone_requestCall.h"
#import "TLRPCphone_confirmCall.h"
#import "TLRPCphone_declineCall.h"
#import "TLRPCupdates_getState.h"
#import "TLRPCupdates_subscribe.h"
#import "TLRPCupdates_unsubscribe.h"
#import "TLRPCphotos_getPhotos.h"
#import "TLRPCphotos_getWall.h"
#import "TLRPCphotos_readWall.h"
#import "TLRPCphotos_editPhoto.h"
#import "TLRPCphotos_updateProfilePhoto.h"
#import "TLRPCphotos_uploadPhoto.h"
#import "TLRPCphotos_uploadProfilePhoto.h"
#import "TLRPCphotos_deletePhotos.h"
#import "TLRPCphotos_restorePhotos.h"
#import "TLRPCupload_saveFilePart.h"
#import "TLRPCupload_getFile.h"
#import "TLRPCgeo_saveGeoPlace.h"
#import "TLRPChelp_getConfig.h"
#import "TLRPChelp_getNearestDc.h"
#import "TLRPChelp_getScheme.h"
#import "TLRPChelp_getAppUpdate.h"
#import "TLRPChelp_getInviteText.h"
#import "TLRPChelp_getAppPrefs.h"
#import "TLRPChelp_saveNetworkStats.h"
#import "TLRPChelp_test.h"
#import "TLRPCcontest_saveDeveloperInfo.h"
#import "TLRPCphotos_getUserPhotos.h"
#import "TLRPCmessages_forwardMessage.h"
#import "TLRPCmessages_sendBroadcast.h"
#import "TLRPCgeochats_getLocated.h"
#import "TLRPCgeochats_getRecents.h"
#import "TLRPCgeochats_checkin.h"
#import "TLRPCgeochats_getFullChat.h"
#import "TLRPCgeochats_editChatTitle.h"
#import "TLRPCgeochats_editChatPhoto.h"
#import "TLRPCgeochats_search.h"
#import "TLRPCgeochats_getHistory.h"
#import "TLRPCgeochats_setTyping.h"
#import "TLRPCgeochats_sendMessage.h"
#import "TLRPCgeochats_sendMedia.h"
#import "TLRPCauth_sendCode.h"
#import "TLRPCaccount_registerDevice.h"
#import "TLRPCgeochats_createGeoChat.h"
#import "TLRPCmessages_getDhConfig.h"
#import "TLRPCmessages_requestEncryption.h"
#import "TLRPCmessages_acceptEncryption.h"
#import "TLRPCmessages_discardEncryption.h"
#import "TLRPCmessages_setEncryptedTyping.h"
#import "TLRPCmessages_readEncryptedHistory.h"
#import "TLRPCmessages_sendEncrypted.h"
#import "TLRPCmessages_sendEncryptedFile.h"
#import "TLRPCmessages_sendEncryptedService.h"
#import "TLRPCmessages_receivedQueue.h"
#import "TLRPCupdates_getDifference.h"
#import "TLRPCupload_saveBigFilePart.h"
#import "TLRPChelp_getSupport.h"
#import "TLRPCauth_sendSms.h"

#ifdef __cplusplus
extern "C" {
#endif
void TLRegisterClasses();
#ifdef __cplusplus
}
#endif