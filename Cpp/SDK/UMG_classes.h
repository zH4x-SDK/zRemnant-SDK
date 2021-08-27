#pragma once

// Name: Remnant, Version: 1.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class UMG.Visual
// 0x0000
class UVisual : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Visual");
		return ptr;
	}



};

// Class UMG.Widget
// 0x0000
class UWidget : public UVisual
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Widget");
		return ptr;
	}



	void SetVisibility();
	void SetUserFocus();
	void SetToolTipText();
	void SetToolTip();
	void SetRenderTranslation();
	void SetRenderTransformPivot();
	void SetRenderTransform();
	void SetRenderShear();
	void SetRenderScale();
	void SetRenderOpacity();
	void SetRenderAngle();
	void SetNavigationRule();
	void SetKeyboardFocus();
	void SetIsEnabled();
	void SetCursor();
	void SetClipping();
	void SetAllNavigationRules();
	void ResetCursor();
	void RemoveFromParent();
	void OnReply__DelegateSignature();
	void OnPointerEvent__DelegateSignature();
	void IsVisible();
	void IsHovered();
	void InvalidateLayoutAndVolatility();
	void HasUserFocusedDescendants();
	void HasUserFocus();
	void HasMouseCaptureByUser();
	void HasMouseCapture();
	void HasKeyboardFocus();
	void HasFocusedDescendants();
	void HasAnyUserFocus();
	void GetWidget__DelegateSignature();
	void GetVisibility();
	void GetText__DelegateSignature();
	void GetSlateVisibility__DelegateSignature();
	void GetSlateColor__DelegateSignature();
	void GetSlateBrush__DelegateSignature();
	void GetRenderOpacity();
	void GetParent();
	void GetOwningPlayer();
	void GetOwningLocalPlayer();
	void GetMouseCursor__DelegateSignature();
	void GetLinearColor__DelegateSignature();
	void GetIsEnabled();
	void GetInt32__DelegateSignature();
	void GetGameInstance();
	void GetFloat__DelegateSignature();
	void GetDesiredSize();
	void GetClipping();
	void GetCheckBoxState__DelegateSignature();
	void GetCachedGeometry();
	void GetBool__DelegateSignature();
	void GenerateWidgetForString__DelegateSignature();
	void GenerateWidgetForObject__DelegateSignature();
	void ForceVolatile();
	void ForceLayoutPrepass();
};

// Class UMG.UserWidget
// 0x0000
class UUserWidget : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserWidget");
		return ptr;
	}



	void UnregisterInputComponent();
	void UnbindFromAnimationStarted();
	void UnbindFromAnimationFinished();
	void UnbindAllFromAnimationStarted();
	void UnbindAllFromAnimationFinished();
	void Tick();
	void StopListeningForInputAction();
	void StopListeningForAllInputActions();
	void StopAnimationsAndLatentActions();
	void StopAnimation();
	void StopAllAnimations();
	void SetPositionInViewport();
	void SetPlaybackSpeed();
	void SetPadding();
	void SetOwningPlayer();
	void SetNumLoopsToPlay();
	void SetInputActionPriority();
	void SetInputActionBlocking();
	void SetForegroundColor();
	void SetDesiredSizeInViewport();
	void SetColorAndOpacity();
	void SetAnchorsInViewport();
	void SetAlignmentInViewport();
	void ReverseAnimation();
	void RemoveFromViewport();
	void RegisterInputComponent();
	void PreConstruct();
	void PlaySound();
	void PlayAnimationTimeRange();
	void PlayAnimationReverse();
	void PlayAnimationForward();
	void PlayAnimation();
	void PauseAnimation();
	void OnTouchStarted();
	void OnTouchMoved();
	void OnTouchGesture();
	void OnTouchForceChanged();
	void OnTouchEnded();
	void OnRemovedFromFocusPath();
	void OnPreviewMouseButtonDown();
	void OnPreviewKeyDown();
	void OnPaint();
	void OnMouseWheel();
	void OnMouseMove();
	void OnMouseLeave();
	void OnMouseEnter();
	void OnMouseCaptureLost();
	void OnMouseButtonUp();
	void OnMouseButtonDown();
	void OnMouseButtonDoubleClick();
	void OnMotionDetected();
	void OnKeyUp();
	void OnKeyDown();
	void OnKeyChar();
	void OnInitialized();
	void OnFocusReceived();
	void OnFocusLost();
	void OnDrop();
	void OnDragOver();
	void OnDragLeave();
	void OnDragEnter();
	void OnDragDetected();
	void OnDragCancelled();
	void OnAnimationStarted();
	void OnAnimationFinished();
	void OnAnalogValueChanged();
	void OnAddedToFocusPath();
	void ListenForInputAction();
	void IsPlayingAnimation();
	void IsListeningForInputAction();
	void IsInViewport();
	void IsInteractable();
	void IsAnyAnimationPlaying();
	void IsAnimationPlayingForward();
	void IsAnimationPlaying();
	void GetOwningPlayerPawn();
	void GetIsVisible();
	void GetAnimationCurrentTime();
	void GetAnchorsInViewport();
	void GetAlignmentInViewport();
	void Destruct();
	void Construct();
	void CancelLatentActions();
	void BindToAnimationStarted();
	void BindToAnimationFinished();
	void BindToAnimationEvent();
	void AddToViewport();
	void AddToPlayerScreen();
};

// Class UMG.WidgetComponent
// 0x0000
class UWidgetComponent : public UMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetComponent");
		return ptr;
	}



	void SetWindowFocusable();
	void SetWidgetSpace();
	void SetWidget();
	void SetTwoSided();
	void SetTintColorAndOpacity();
	void SetTickWhenOffscreen();
	void SetRedrawTime();
	void SetPivot();
	void SetOwnerPlayer();
	void SetManuallyRedraw();
	void SetGeometryMode();
	void SetDrawSize();
	void SetDrawAtDesiredSize();
	void SetCylinderArcAngle();
	void SetBackgroundColor();
	void RequestRedraw();
	void GetWindowFocusable();
	void GetWidgetSpace();
	void GetUserWidgetObject();
	void GetTwoSided();
	void GetTickWhenOffscreen();
	void GetRenderTarget();
	void GetRedrawTime();
	void GetPivot();
	void GetOwnerPlayer();
	void GetMaterialInstance();
	void GetManuallyRedraw();
	void GetGeometryMode();
	void GetDrawSize();
	void GetDrawAtDesiredSize();
	void GetCylinderArcAngle();
	void GetCurrentDrawSize();
};

// Class UMG.Image
// 0x0000
class UImage : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Image");
		return ptr;
	}



	void SetOpacity();
	void SetColorAndOpacity();
	void SetBrushTintColor();
	void SetBrushSize();
	void SetBrushFromTextureDynamic();
	void SetBrushFromTexture();
	void SetBrushFromSoftTexture();
	void SetBrushFromSoftMaterial();
	void SetBrushFromMaterial();
	void SetBrushFromAtlasInterface();
	void SetBrushFromAsset();
	void SetBrush();
	void GetDynamicMaterial();
};

// Class UMG.PanelWidget
// 0x0000
class UPanelWidget : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PanelWidget");
		return ptr;
	}



	void RemoveChildAt();
	void RemoveChild();
	void HasChild();
	void HasAnyChildren();
	void GetChildrenCount();
	void GetChildIndex();
	void GetChildAt();
	void GetAllChildren();
	void ClearChildren();
	void AddChild();
};

// Class UMG.CanvasPanel
// 0x0000
class UCanvasPanel : public UPanelWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CanvasPanel");
		return ptr;
	}



	void AddChildToCanvas();
};

// Class UMG.PanelSlot
// 0x0000
class UPanelSlot : public UVisual
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PanelSlot");
		return ptr;
	}



};

// Class UMG.ContentWidget
// 0x0000
class UContentWidget : public UPanelWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ContentWidget");
		return ptr;
	}



	void SetContent();
	void GetContentSlot();
	void GetContent();
};

// Class UMG.CanvasPanelSlot
// 0x0000
class UCanvasPanelSlot : public UPanelSlot
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CanvasPanelSlot");
		return ptr;
	}



	void SetZOrder();
	void SetSize();
	void SetPosition();
	void SetOffsets();
	void SetMinimum();
	void SetMaximum();
	void SetLayout();
	void SetAutoSize();
	void SetAnchors();
	void SetAlignment();
	void GetZOrder();
	void GetSize();
	void GetPosition();
	void GetOffsets();
	void GetLayout();
	void GetAutoSize();
	void GetAnchors();
	void GetAlignment();
};

// Class UMG.AsyncTaskDownloadImage
// 0x0000
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.AsyncTaskDownloadImage");
		return ptr;
	}



	void DownloadImage();
};

// Class UMG.BackgroundBlur
// 0x0000
class UBackgroundBlur : public UContentWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BackgroundBlur");
		return ptr;
	}



	void SetVerticalAlignment();
	void SetPadding();
	void SetLowQualityFallbackBrush();
	void SetHorizontalAlignment();
	void SetBlurStrength();
	void SetBlurRadius();
	void SetApplyAlphaToBlur();
};

// Class UMG.BackgroundBlurSlot
// 0x0000
class UBackgroundBlurSlot : public UPanelSlot
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BackgroundBlurSlot");
		return ptr;
	}



	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
};

// Class UMG.PropertyBinding
// 0x0000
class UPropertyBinding : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PropertyBinding");
		return ptr;
	}



};

// Class UMG.BoolBinding
// 0x0000
class UBoolBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BoolBinding");
		return ptr;
	}



	void GetValue();
};

// Class UMG.Border
// 0x0000
class UBorder : public UContentWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Border");
		return ptr;
	}



	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
	void SetDesiredSizeScale();
	void SetContentColorAndOpacity();
	void SetBrushFromTexture();
	void SetBrushFromMaterial();
	void SetBrushFromAsset();
	void SetBrushColor();
	void SetBrush();
	void GetDynamicMaterial();
};

// Class UMG.BorderSlot
// 0x0000
class UBorderSlot : public UPanelSlot
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BorderSlot");
		return ptr;
	}



	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
};

// Class UMG.BrushBinding
// 0x0000
class UBrushBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BrushBinding");
		return ptr;
	}



	void GetValue();
};

// Class UMG.Button
// 0x0000
class UButton : public UContentWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Button");
		return ptr;
	}



	void SetTouchMethod();
	void SetStyle();
	void SetPressMethod();
	void SetColorAndOpacity();
	void SetClickMethod();
	void SetBackgroundColor();
	void IsPressed();
};

// Class UMG.ButtonSlot
// 0x0000
class UButtonSlot : public UPanelSlot
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ButtonSlot");
		return ptr;
	}



	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
};

// Class UMG.CheckBox
// 0x0000
class UCheckBox : public UContentWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CheckBox");
		return ptr;
	}



	void SetIsChecked();
	void SetCheckedState();
	void IsPressed();
	void IsChecked();
	void GetCheckedState();
};

// Class UMG.CheckedStateBinding
// 0x0000
class UCheckedStateBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CheckedStateBinding");
		return ptr;
	}



	void GetValue();
};

// Class UMG.CircularThrobber
// 0x0000
class UCircularThrobber : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CircularThrobber");
		return ptr;
	}



	void SetRadius();
	void SetPeriod();
	void SetNumberOfPieces();
};

// Class UMG.ColorBinding
// 0x0000
class UColorBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ColorBinding");
		return ptr;
	}



	void GetSlateValue();
	void GetLinearValue();
};

// Class UMG.ComboBox
// 0x0000
class UComboBox : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ComboBox");
		return ptr;
	}



};

// Class UMG.ComboBoxString
// 0x0000
class UComboBoxString : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ComboBoxString");
		return ptr;
	}



	void SetSelectedOption();
	void SetSelectedIndex();
	void RemoveOption();
	void RefreshOptions();
	void OnSelectionChangedEvent__DelegateSignature();
	void OnOpeningEvent__DelegateSignature();
	void GetSelectedOption();
	void GetSelectedIndex();
	void GetOptionCount();
	void GetOptionAtIndex();
	void FindOptionIndex();
	void ClearSelection();
	void ClearOptions();
	void AddOption();
};

// Class UMG.DragDropOperation
// 0x0000
class UDragDropOperation : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.DragDropOperation");
		return ptr;
	}



	void Drop();
	void Dragged();
	void DragCancelled();
};

// Class UMG.DynamicEntryBox
// 0x0000
class UDynamicEntryBox : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.DynamicEntryBox");
		return ptr;
	}



	void SetEntrySpacing();
	void Reset();
	void RemoveEntry();
	void GetNumEntries();
	void GetAllEntries();
	void BP_CreateEntryOfClass();
	void BP_CreateEntry();
};

// Class UMG.EditableText
// 0x0000
class UEditableText : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.EditableText");
		return ptr;
	}



	void SetText();
	void SetIsReadOnly();
	void SetIsPassword();
	void SetHintText();
	void OnEditableTextCommittedEvent__DelegateSignature();
	void OnEditableTextChangedEvent__DelegateSignature();
	void GetText();
};

// Class UMG.EditableTextBox
// 0x0000
class UEditableTextBox : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.EditableTextBox");
		return ptr;
	}



	void SetText();
	void SetIsReadOnly();
	void SetIsPassword();
	void SetHintText();
	void SetError();
	void OnEditableTextBoxCommittedEvent__DelegateSignature();
	void OnEditableTextBoxChangedEvent__DelegateSignature();
	void HasError();
	void GetText();
	void ClearError();
};

// Class UMG.ExpandableArea
// 0x0000
class UExpandableArea : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ExpandableArea");
		return ptr;
	}



	void SetIsExpanded_Animated();
	void SetIsExpanded();
	void GetIsExpanded();
};

// Class UMG.FloatBinding
// 0x0000
class UFloatBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.FloatBinding");
		return ptr;
	}



	void GetValue();
};

// Class UMG.GridPanel
// 0x0000
class UGridPanel : public UPanelWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.GridPanel");
		return ptr;
	}



	void SetRowFill();
	void SetColumnFill();
	void AddChildToGrid();
};

// Class UMG.GridSlot
// 0x0000
class UGridSlot : public UPanelSlot
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.GridSlot");
		return ptr;
	}



	void SetVerticalAlignment();
	void SetRowSpan();
	void SetRow();
	void SetPadding();
	void SetLayer();
	void SetHorizontalAlignment();
	void SetColumnSpan();
	void SetColumn();
};

// Class UMG.HorizontalBox
// 0x0000
class UHorizontalBox : public UPanelWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.HorizontalBox");
		return ptr;
	}



	void AddChildToHorizontalBox();
};

// Class UMG.HorizontalBoxSlot
// 0x0000
class UHorizontalBoxSlot : public UPanelSlot
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.HorizontalBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment();
	void SetSize();
	void SetPadding();
	void SetHorizontalAlignment();
};

// Class UMG.InputKeySelector
// 0x0000
class UInputKeySelector : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.InputKeySelector");
		return ptr;
	}



	void SetTextBlockVisibility();
	void SetSelectedKey();
	void SetNoKeySpecifiedText();
	void SetKeySelectionText();
	void SetEscapeKeys();
	void SetAllowModifierKeys();
	void SetAllowGamepadKeys();
	void OnKeySelected__DelegateSignature();
	void OnIsSelectingKeyChanged__DelegateSignature();
	void GetIsSelectingKey();
};

// Class UMG.Int32Binding
// 0x0000
class UInt32Binding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Int32Binding");
		return ptr;
	}



	void GetValue();
};

// Class UMG.InvalidationBox
// 0x0000
class UInvalidationBox : public UContentWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.InvalidationBox");
		return ptr;
	}



	void SetCanCache();
	void InvalidateCache();
	void GetCanCache();
};

// Class UMG.NativeUserListEntry
// 0x0000
class UNativeUserListEntry : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NativeUserListEntry");
		return ptr;
	}



	void IsListItemSelected();
	void IsListItemExpanded();
	void GetOwningListView();
};

// Class UMG.UserListEntry
// 0x0000
class UUserListEntry : public UNativeUserListEntry
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserListEntry");
		return ptr;
	}



	void BP_OnItemSelectionChanged();
	void BP_OnItemExpansionChanged();
	void BP_OnEntryReleased();
};

// Class UMG.UserObjectListEntry
// 0x0000
class UUserObjectListEntry : public UUserListEntry
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserObjectListEntry");
		return ptr;
	}



	void OnListItemObjectSet();
	void GetListItemObject();
};

// Class UMG.ListViewBase
// 0x0000
class UListViewBase : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ListViewBase");
		return ptr;
	}



	void ScrollToTop();
	void ScrollToBottom();
	void RegenerateAllEntries();
	void GetDisplayedEntryWidgets();
};

// Class UMG.ListView
// 0x0000
class UListView : public UListViewBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ListView");
		return ptr;
	}



	void SetSelectionMode();
	void SetSelectedIndex();
	void ScrollIndexIntoView();
	void NavigateToIndex();
	void IsRefreshPending();
	void GetNumItems();
	void GetListItems();
	void GetItemAt();
	void GetIndexForItem();
	void ClearListItems();
	void BP_SetSelectedItem();
	void BP_SetListItems();
	void BP_SetItemSelection();
	void BP_ScrollItemIntoView();
	void BP_NavigateToItem();
	void BP_IsItemVisible();
	void BP_GetSelectedItems();
	void BP_GetSelectedItem();
	void BP_GetNumItemsSelected();
	void BP_ClearSelection();
	void BP_CancelScrollIntoView();
	void AddItem();
};

// Class UMG.ListViewDesignerPreviewItem
// 0x0000
class UListViewDesignerPreviewItem : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ListViewDesignerPreviewItem");
		return ptr;
	}



};

// Class UMG.MenuAnchor
// 0x0000
class UMenuAnchor : public UContentWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MenuAnchor");
		return ptr;
	}



	void ToggleOpen();
	void ShouldOpenDueToClick();
	void Open();
	void IsOpen();
	void HasOpenSubMenus();
	void GetMenuPosition();
	void Close();
};

// Class UMG.MouseCursorBinding
// 0x0000
class UMouseCursorBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MouseCursorBinding");
		return ptr;
	}



	void GetValue();
};

// Class UMG.MovieScene2DTransformSection
// 0x0000
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieScene2DTransformSection");
		return ptr;
	}



};

// Class UMG.MovieScene2DTransformTrack
// 0x0000
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieScene2DTransformTrack");
		return ptr;
	}



};

// Class UMG.MovieSceneMarginSection
// 0x0000
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneMarginSection");
		return ptr;
	}



};

// Class UMG.MovieSceneMarginTrack
// 0x0000
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneMarginTrack");
		return ptr;
	}



};

// Class UMG.MovieSceneWidgetMaterialTrack
// 0x0000
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneWidgetMaterialTrack");
		return ptr;
	}



};

// Class UMG.TextLayoutWidget
// 0x0000
class UTextLayoutWidget : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextLayoutWidget");
		return ptr;
	}



};

// Class UMG.MultiLineEditableText
// 0x0000
class UMultiLineEditableText : public UTextLayoutWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MultiLineEditableText");
		return ptr;
	}



	void SetText();
	void SetIsReadOnly();
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature();
	void OnMultiLineEditableTextChangedEvent__DelegateSignature();
	void GetText();
};

// Class UMG.MultiLineEditableTextBox
// 0x0000
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MultiLineEditableTextBox");
		return ptr;
	}



	void SetText();
	void SetIsReadOnly();
	void SetError();
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature();
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature();
	void GetText();
};

// Class UMG.NamedSlot
// 0x0000
class UNamedSlot : public UContentWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NamedSlot");
		return ptr;
	}



};

// Class UMG.NamedSlotInterface
// 0x0000
class UNamedSlotInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NamedSlotInterface");
		return ptr;
	}



};

// Class UMG.NativeWidgetHost
// 0x0000
class UNativeWidgetHost : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NativeWidgetHost");
		return ptr;
	}



};

// Class UMG.Overlay
// 0x0000
class UOverlay : public UPanelWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Overlay");
		return ptr;
	}



	void AddChildToOverlay();
};

// Class UMG.OverlaySlot
// 0x0000
class UOverlaySlot : public UPanelSlot
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.OverlaySlot");
		return ptr;
	}



	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
};

// Class UMG.ProgressBar
// 0x0000
class UProgressBar : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ProgressBar");
		return ptr;
	}



	void SetPercent();
	void SetIsMarquee();
	void SetFillColorAndOpacity();
};

// Class UMG.RetainerBox
// 0x0000
class URetainerBox : public UContentWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RetainerBox");
		return ptr;
	}



	void SetTextureParameter();
	void SetRenderingPhase();
	void SetEffectMaterial();
	void RequestRender();
	void GetEffectMaterial();
};

// Class UMG.RichTextBlock
// 0x0000
class URichTextBlock : public UTextLayoutWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlock");
		return ptr;
	}



	void SetText();
	void GetDecoratorByClass();
};

// Class UMG.RichTextBlockDecorator
// 0x0000
class URichTextBlockDecorator : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlockDecorator");
		return ptr;
	}



};

// Class UMG.RichTextBlockImageDecorator
// 0x0000
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlockImageDecorator");
		return ptr;
	}



};

// Class UMG.SafeZone
// 0x0000
class USafeZone : public UContentWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SafeZone");
		return ptr;
	}



	void SetSidesToPad();
};

// Class UMG.SafeZoneSlot
// 0x0000
class USafeZoneSlot : public UPanelSlot
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SafeZoneSlot");
		return ptr;
	}



};

// Class UMG.ScaleBox
// 0x0000
class UScaleBox : public UContentWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScaleBox");
		return ptr;
	}



	void SetUserSpecifiedScale();
	void SetStretchDirection();
	void SetStretch();
	void SetIgnoreInheritedScale();
};

// Class UMG.ScaleBoxSlot
// 0x0000
class UScaleBoxSlot : public UPanelSlot
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScaleBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
};

// Class UMG.ScrollBar
// 0x0000
class UScrollBar : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBar");
		return ptr;
	}



	void SetState();
};

// Class UMG.ScrollBox
// 0x0000
class UScrollBox : public UPanelWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBox");
		return ptr;
	}



	void SetScrollOffset();
	void SetScrollBarVisibility();
	void SetScrollbarThickness();
	void SetOrientation();
	void SetConsumeMouseWheel();
	void SetAlwaysShowScrollbar();
	void SetAllowOverscroll();
	void ScrollWidgetIntoView();
	void ScrollToStart();
	void ScrollToEnd();
	void GetViewOffsetFraction();
	void GetScrollOffset();
};

// Class UMG.ScrollBoxSlot
// 0x0000
class UScrollBoxSlot : public UPanelSlot
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
};

// Class UMG.SizeBox
// 0x0000
class USizeBox : public UContentWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SizeBox");
		return ptr;
	}



	void SetWidthOverride();
	void SetMinDesiredWidth();
	void SetMinDesiredHeight();
	void SetMaxDesiredWidth();
	void SetMaxDesiredHeight();
	void SetMaxAspectRatio();
	void SetHeightOverride();
	void ClearWidthOverride();
	void ClearMinDesiredWidth();
	void ClearMinDesiredHeight();
	void ClearMaxDesiredWidth();
	void ClearMaxDesiredHeight();
	void ClearMaxAspectRatio();
	void ClearHeightOverride();
};

// Class UMG.SizeBoxSlot
// 0x0000
class USizeBoxSlot : public UPanelSlot
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SizeBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
};

// Class UMG.SlateBlueprintLibrary
// 0x0000
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SlateBlueprintLibrary");
		return ptr;
	}



	void TransformVectorLocalToAbsolute();
	void TransformVectorAbsoluteToLocal();
	void TransformScalarLocalToAbsolute();
	void TransformScalarAbsoluteToLocal();
	void ScreenToWidgetLocal();
	void ScreenToWidgetAbsolute();
	void ScreenToViewport();
	void LocalToViewport();
	void LocalToAbsolute();
	void IsUnderLocation();
	void GetLocalSize();
	void GetAbsoluteSize();
	void EqualEqual_SlateBrush();
	void AbsoluteToViewport();
	void AbsoluteToLocal();
};

// Class UMG.SlateVectorArtData
// 0x0000
class USlateVectorArtData : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SlateVectorArtData");
		return ptr;
	}



};

// Class UMG.Slider
// 0x0000
class USlider : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Slider");
		return ptr;
	}



	void SetValue();
	void SetStepSize();
	void SetSliderHandleColor();
	void SetSliderBarColor();
	void SetLocked();
	void SetIndentHandle();
	void GetValue();
};

// Class UMG.Spacer
// 0x0000
class USpacer : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Spacer");
		return ptr;
	}



	void SetSize();
};

// Class UMG.SpinBox
// 0x0000
class USpinBox : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SpinBox");
		return ptr;
	}



	void SetValue();
	void SetMinValue();
	void SetMinSliderValue();
	void SetMaxValue();
	void SetMaxSliderValue();
	void SetForegroundColor();
	void OnSpinBoxValueCommittedEvent__DelegateSignature();
	void OnSpinBoxValueChangedEvent__DelegateSignature();
	void OnSpinBoxBeginSliderMovement__DelegateSignature();
	void GetValue();
	void GetMinValue();
	void GetMinSliderValue();
	void GetMaxValue();
	void GetMaxSliderValue();
	void ClearMinValue();
	void ClearMinSliderValue();
	void ClearMaxValue();
	void ClearMaxSliderValue();
};

// Class UMG.TextBinding
// 0x0000
class UTextBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextBinding");
		return ptr;
	}



	void GetTextValue();
	void GetStringValue();
};

// Class UMG.TextBlock
// 0x0000
class UTextBlock : public UTextLayoutWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextBlock");
		return ptr;
	}



	void SetText();
	void SetStrikeBrush();
	void SetShadowOffset();
	void SetShadowColorAndOpacity();
	void SetOpacity();
	void SetMinDesiredWidth();
	void SetJustification();
	void SetFont();
	void SetColorAndOpacity();
	void SetAutoWrapText();
	void GetText();
	void GetDynamicOutlineMaterial();
	void GetDynamicFontMaterial();
};

// Class UMG.Throbber
// 0x0000
class UThrobber : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Throbber");
		return ptr;
	}



	void SetNumberOfPieces();
	void SetAnimateVertically();
	void SetAnimateOpacity();
	void SetAnimateHorizontally();
};

// Class UMG.TileView
// 0x0000
class UTileView : public UListView
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TileView");
		return ptr;
	}



	void SetEntryWidth();
	void SetEntryHeight();
};

// Class UMG.TreeView
// 0x0000
class UTreeView : public UListView
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TreeView");
		return ptr;
	}



	void SetItemExpansion();
	void ExpandAll();
	void CollapseAll();
};

// Class UMG.UMGSequencePlayer
// 0x0000
class UUMGSequencePlayer : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UMGSequencePlayer");
		return ptr;
	}



	void SetUserTag();
	void GetUserTag();
};

// Class UMG.UniformGridPanel
// 0x0000
class UUniformGridPanel : public UPanelWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UniformGridPanel");
		return ptr;
	}



	void SetSlotPadding();
	void SetMinDesiredSlotWidth();
	void SetMinDesiredSlotHeight();
	void AddChildToUniformGrid();
};

// Class UMG.UniformGridSlot
// 0x0000
class UUniformGridSlot : public UPanelSlot
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UniformGridSlot");
		return ptr;
	}



	void SetVerticalAlignment();
	void SetRow();
	void SetHorizontalAlignment();
	void SetColumn();
};

// Class UMG.VerticalBox
// 0x0000
class UVerticalBox : public UPanelWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VerticalBox");
		return ptr;
	}



	void AddChildToVerticalBox();
};

// Class UMG.VerticalBoxSlot
// 0x0000
class UVerticalBoxSlot : public UPanelSlot
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VerticalBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment();
	void SetSize();
	void SetPadding();
	void SetHorizontalAlignment();
};

// Class UMG.Viewport
// 0x0000
class UViewport : public UContentWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Viewport");
		return ptr;
	}



	void Spawn();
	void SetViewRotation();
	void SetViewLocation();
	void GetViewRotation();
	void GetViewportWorld();
	void GetViewLocation();
};

// Class UMG.VisibilityBinding
// 0x0000
class UVisibilityBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VisibilityBinding");
		return ptr;
	}



	void GetValue();
};

// Class UMG.WidgetAnimation
// 0x0000
class UWidgetAnimation : public UMovieSceneSequence
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetAnimation");
		return ptr;
	}



	void UnbindFromAnimationStarted();
	void UnbindFromAnimationFinished();
	void UnbindAllFromAnimationStarted();
	void UnbindAllFromAnimationFinished();
	void GetStartTime();
	void GetEndTime();
	void BindToAnimationStarted();
	void BindToAnimationFinished();
};

// Class UMG.WidgetAnimationDelegateBinding
// 0x0000
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetAnimationDelegateBinding");
		return ptr;
	}



};

// Class UMG.WidgetBinding
// 0x0000
class UWidgetBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBinding");
		return ptr;
	}



	void GetValue();
};

// Class UMG.WidgetBlueprintGeneratedClass
// 0x0000
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBlueprintGeneratedClass");
		return ptr;
	}



};

// Class UMG.WidgetBlueprintLibrary
// 0x0000
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBlueprintLibrary");
		return ptr;
	}



	void UnlockMouse();
	void Unhandled();
	void SetWindowTitleBarState();
	void SetWindowTitleBarOnCloseClickedDelegate();
	void SetWindowTitleBarCloseButtonActive();
	void SetUserFocus();
	void SetMousePosition();
	void SetInputMode_UIOnlyEx();
	void SetInputMode_UIOnly();
	void SetInputMode_GameOnly();
	void SetInputMode_GameAndUIEx();
	void SetInputMode_GameAndUI();
	void SetHardwareCursor();
	void SetFocusToGameViewport();
	void SetColorVisionDeficiencyType();
	void SetBrushResourceToTexture();
	void SetBrushResourceToMaterial();
	void RestorePreviousWindowTitleBarState();
	void ReleaseMouseCapture();
	void ReleaseJoystickCapture();
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
	void NoResourceBrush();
	void MakeBrushFromTexture();
	void MakeBrushFromMaterial();
	void MakeBrushFromAsset();
	void LockMouse();
	void IsDragDropping();
	void Handled();
	void GetSafeZonePadding();
	void GetKeyEventFromAnalogInputEvent();
	void GetInputEventFromPointerEvent();
	void GetInputEventFromNavigationEvent();
	void GetInputEventFromKeyEvent();
	void GetInputEventFromCharacterEvent();
	void GetDynamicMaterial();
	void GetDragDroppingContent();
	void GetBrushResourceAsTexture2D();
	void GetBrushResourceAsMaterial();
	void GetBrushResource();
	void GetAllWidgetsWithInterface();
	void GetAllWidgetsOfClass();
	void EndDragDrop();
	void DrawTextFormatted();
	void DrawText();
	void DrawLines();
	void DrawLine();
	void DrawBox();
	void DismissAllMenus();
	void DetectDragIfPressed();
	void DetectDrag();
	void CreateDragDropOperation();
	void Create();
	void ClearUserFocus();
	void CaptureMouse();
	void CaptureJoystick();
	void CancelDragDrop();
};

// Class UMG.WidgetInteractionComponent
// 0x0000
class UWidgetInteractionComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetInteractionComponent");
		return ptr;
	}



	void SetCustomHitResult();
	void SendKeyChar();
	void ScrollWheel();
	void ReleasePointerKey();
	void ReleaseKey();
	void PressPointerKey();
	void PressKey();
	void PressAndReleaseKey();
	void IsOverInteractableWidget();
	void IsOverHitTestVisibleWidget();
	void IsOverFocusableWidget();
	void GetLastHitResult();
	void GetHoveredWidgetComponent();
	void Get2DHitLocation();
};

// Class UMG.WidgetLayoutLibrary
// 0x0000
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetLayoutLibrary");
		return ptr;
	}



	void SlotAsVerticalBoxSlot();
	void SlotAsUniformGridSlot();
	void SlotAsOverlaySlot();
	void SlotAsHorizontalBoxSlot();
	void SlotAsGridSlot();
	void SlotAsCanvasSlot();
	void SlotAsBorderSlot();
	void RemoveAllWidgets();
	void ProjectWorldLocationToWidgetPosition();
	void GetViewportWidgetGeometry();
	void GetViewportSize();
	void GetViewportScale();
	void GetPlayerScreenWidgetGeometry();
	void GetMousePositionScaledByDPI();
	void GetMousePositionOnViewport();
	void GetMousePositionOnPlatform();
};

// Class UMG.WidgetNavigation
// 0x0000
class UWidgetNavigation : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetNavigation");
		return ptr;
	}



};

// Class UMG.WidgetSwitcher
// 0x0000
class UWidgetSwitcher : public UPanelWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetSwitcher");
		return ptr;
	}



	void SetActiveWidgetIndex();
	void SetActiveWidget();
	void GetWidgetAtIndex();
	void GetNumWidgets();
	void GetActiveWidgetIndex();
	void GetActiveWidget();
};

// Class UMG.WidgetSwitcherSlot
// 0x0000
class UWidgetSwitcherSlot : public UPanelSlot
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetSwitcherSlot");
		return ptr;
	}



	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
};

// Class UMG.WidgetTree
// 0x0000
class UWidgetTree : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetTree");
		return ptr;
	}



};

// Class UMG.WindowTitleBarArea
// 0x0000
class UWindowTitleBarArea : public UContentWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WindowTitleBarArea");
		return ptr;
	}



	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
};

// Class UMG.WindowTitleBarAreaSlot
// 0x0000
class UWindowTitleBarAreaSlot : public UPanelSlot
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WindowTitleBarAreaSlot");
		return ptr;
	}



	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
};

// Class UMG.WrapBox
// 0x0000
class UWrapBox : public UPanelWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WrapBox");
		return ptr;
	}



	void SetInnerSlotPadding();
	void AddChildToWrapBox();
};

// Class UMG.WrapBoxSlot
// 0x0000
class UWrapBoxSlot : public UPanelSlot
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WrapBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
	void SetFillSpanWhenLessThan();
	void SetFillEmptySpace();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
