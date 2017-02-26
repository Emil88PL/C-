object Form1: TForm1
  Left = 1817
  Top = 264
  Width = 727
  Height = 675
  Caption = 'Notes'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object tresc: TMemo
    Left = 0
    Top = 0
    Width = 711
    Height = 617
    Align = alClient
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 0
    OnKeyDown = trescKeyDown
  end
  object MainMenu1: TMainMenu
    Left = 680
    object File1: TMenuItem
      Caption = '&File'
      object Nowy1: TMenuItem
        Caption = '&Nowy'
        OnClick = Nowy1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Open1: TMenuItem
        Caption = '&Open'
        OnClick = Open1Click
      end
      object Save1: TMenuItem
        Caption = '&Save    Ctrl+s'
        OnClick = Save1Click
      end
      object Saveus1: TMenuItem
        Caption = 'Sa&ve As...'
        OnClick = Saveus1Click
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object Exit1: TMenuItem
        Caption = '&Exit'
        OnClick = Exit1Click
      end
    end
    object Edit1: TMenuItem
      Caption = '&Edit'
      object Cut1: TMenuItem
        Caption = '&Cut    Ctrl+X'
        OnClick = Cut1Click
      end
      object CopyCtrlC1: TMenuItem
        Caption = 'Cop&y    Ctrl+C'
        OnClick = CopyCtrlC1Click
      end
      object PasteCtrlV1: TMenuItem
        Caption = 'P&aste    Ctrl+V'
        OnClick = PasteCtrlV1Click
      end
    end
    object View1: TMenuItem
      Caption = 'F&ormat'
      object WordWrap1: TMenuItem
        Caption = '&Word Wrap'
        Checked = True
        OnClick = WordWrap1Click
      end
      object Font1: TMenuItem
        Caption = '&Font...'
        OnClick = Font1Click
      end
    end
    object Help1: TMenuItem
      Caption = '&Help'
      object info1: TMenuItem
        Caption = 'i&nfo'
        object About1: TMenuItem
          Caption = 'A&bout'
          OnClick = About1Click
        end
        object Web1: TMenuItem
          Caption = '&Web'
          OnClick = Web1Click
        end
      end
    end
  end
  object OpenDialog1: TOpenDialog
    Filter = 'TXT|*.txt|All|*.*'
    Left = 680
    Top = 32
  end
  object SaveDialog1: TSaveDialog
    Filter = 'TXT|*.txt|All|*.*'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofEnableSizing]
    Left = 680
    Top = 56
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 560
    Top = 56
  end
end
