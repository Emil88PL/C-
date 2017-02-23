object Form1: TForm1
  Left = 1671
  Top = 66
  Width = 434
  Height = 288
  Caption = 'Tictactoe'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object p1: TImage
    Left = 32
    Top = 8
    Width = 54
    Height = 56
    Cursor = crHandPoint
    OnClick = p1Click
  end
  object p2: TImage
    Left = 96
    Top = 8
    Width = 54
    Height = 56
    Cursor = crHandPoint
    OnClick = p2Click
  end
  object p4: TImage
    Left = 32
    Top = 72
    Width = 54
    Height = 56
    Cursor = crHandPoint
    OnClick = p4Click
  end
  object p3: TImage
    Left = 160
    Top = 8
    Width = 54
    Height = 56
    Cursor = crHandPoint
    OnClick = p3Click
  end
  object p5: TImage
    Left = 96
    Top = 72
    Width = 54
    Height = 56
    Cursor = crHandPoint
    OnClick = p5Click
  end
  object p6: TImage
    Left = 160
    Top = 72
    Width = 54
    Height = 56
    Cursor = crHandPoint
    OnClick = p6Click
  end
  object p7: TImage
    Left = 32
    Top = 136
    Width = 54
    Height = 56
    Cursor = crHandPoint
    OnClick = p7Click
  end
  object p8: TImage
    Left = 96
    Top = 136
    Width = 54
    Height = 56
    Cursor = crHandPoint
    OnClick = p8Click
  end
  object p9: TImage
    Left = 160
    Top = 136
    Width = 54
    Height = 56
    Cursor = crHandPoint
    OnClick = p9Click
  end
  object Label1: TLabel
    Left = 248
    Top = 24
    Width = 89
    Height = 37
    Caption = 'Player'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object t: TImage
    Left = 280
    Top = 80
    Width = 27
    Height = 26
  end
  object Button1: TButton
    Left = 256
    Top = 136
    Width = 75
    Height = 25
    Cursor = crHandPoint
    Caption = 'Reset'
    TabOrder = 0
    OnClick = FormCreate
  end
end
