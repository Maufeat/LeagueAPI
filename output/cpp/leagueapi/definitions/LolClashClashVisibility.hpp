#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolClashClashVisibility { /**/ 
    DarkVisible_e = 1, /**/ 
    Hidden_e = 0, /**/ 
    Visible_e = 2, /**/ 
  };
  static void to_json(json& j, const LolClashClashVisibility& v) {
    switch(v) { 
    case LolClashClashVisibility::DarkVisible_e:
      j = "DarkVisible";
    break;
    case LolClashClashVisibility::Hidden_e:
      j = "Hidden";
    break;
    case LolClashClashVisibility::Visible_e:
      j = "Visible";
    break;
    };
  }
  static void from_json(const json& j, LolClashClashVisibility& v) {
    auto s = j.get<std::string>(); 
    if(s == "DarkVisible") {
      v = LolClashClashVisibility::DarkVisible_e;
      return;
    } 
    if(s == "Hidden") {
      v = LolClashClashVisibility::Hidden_e;
      return;
    } 
    if(s == "Visible") {
      v = LolClashClashVisibility::Visible_e;
      return;
    } 
  }
} 