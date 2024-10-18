#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x460 - 0x340)
// WidgetBlueprintGeneratedClass AccountLinkingWindow.AccountLinkingWindow_C
class UAccountLinkingWindow_C : public UFortAccountLinkingWindow
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     ButtonLogIn;                                       // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonNoThanks;                                    // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonSIGNUP;                                      // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonSkipSignInLogIn;                             // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonSkipSignInNoThanks;                          // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonSkipSignInSignUp;                            // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                     CircularThrobberArtificialDelay;                   // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                       HaveEpicAccountBlur;                               // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 MainWidgetSwitcher;                                // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                       SkipSignInBlur;                                    // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcherNoThanksSwitcher;                    // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  CheckingPurchasesText;                             // 0x3A0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  CreatingAccountText;                               // 0x3B8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  CreateHeadlessAccountFailedText;                   // 0x3D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ProceedingWithoutLinkingAccountsText;              // 0x3E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastDelegateProperty_                  OnRequestAutoLogin;                                // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnAccountLinkingComplete;                          // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnRequestSignIn;                                   // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnAccountLinkingFailed;                            // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnPushStatus;                                      // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnPopStatus;                                       // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AccountLinkingWindow_C");
		return Clss;
	}

	void OnAccountNotCreated_2B6C467D495BF62E436C79B3550FE868();
	void OnAccountCreatedButNotLinked_2B6C467D495BF62E436C79B3550FE868();
	void OnAccountCreatedAndLinked_2B6C467D495BF62E436C79B3550FE868();
	void OnAccountNotCreated_9EEEC6E44BF7A7C172929DA05184702A();
	void OnAccountCreated_9EEEC6E44BF7A7C172929DA05184702A();
	void BndEvt__ButtonNoThanks_K2Node_ComponentBoundEvent_447_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonLogIn_K2Node_ComponentBoundEvent_431_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonSkipSignInSignIn_K2Node_ComponentBoundEvent_444_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonSkipSignInLogIn_K2Node_ComponentBoundEvent_463_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonSkipSignInNoThanks_K2Node_ComponentBoundEvent_483_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonSignUp_K2Node_ComponentBoundEvent_416_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void ShowHaveEpicAccountScreen();
	void ShowSkipSignInScreen();
	void ArtificialDelayExpired();
	void StartSignup();
	void OnActivated();
	void ExecuteUbergraph_AccountLinkingWindow(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortAsyncAction_WebCreateEpicAccountAndLink* CallFunc_WebCreateEpicAccountAndLink_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortAsyncAction_CreateHeadlessAccount* CallFunc_CreateHeadlessAccount_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button5, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2);
	void OnPopStatus__DelegateSignature();
	void OnPushStatus__DelegateSignature(class FText StatusText);
	void OnAccountLinkingFailed__DelegateSignature(class FText FailReason);
	void OnRequestSignIn__DelegateSignature();
	void OnAccountLinkingComplete__DelegateSignature();
	void OnRequestAutoLogin__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
