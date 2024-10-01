// Sylbie All Rights Reserved


#include "DataAssets/Input/DataAsset_InputConfig.h"

UInputAction* UDataAsset_InputConfig::FindNativeActionByTag(const FGameplayTag& InInputTag)
{
	for (const FWarriorInputActionConfig& InputActionConfig : NativeInputActions) {
		if (InputActionConfig.InputTag == InInputTag && InputActionConfig.InputAction) {
			return InputActionConfig.InputAction;
		}
	}

	return nullptr;
}
