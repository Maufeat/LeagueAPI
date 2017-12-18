#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolClashClashVisibility {  
    DarkVisible_e = 1,
    Hidden_e = 0,
    Visible_e = 2,
  };
  inline void to_json(json& j, const LolClashClashVisibility& v) {
    if(v == LolClashClashVisibility::DarkVisible_e) {
      j = "DarkVisible";
      return;
    }
    if(v == LolClashClashVisibility::Hidden_e) {
      j = "Hidden";
      return;
    }
    if(v == LolClashClashVisibility::Visible_e) {
      j = "Visible";
      return;
    }
  }
  inline void from_json(const json& j, LolClashClashVisibility& v) {
    if(j.get<std::string>() == "DarkVisible") {
      v = LolClashClashVisibility::DarkVisible_e;
      return;
    } 
    if(j.get<std::string>() == "Hidden") {
      v = LolClashClashVisibility::Hidden_e;
      return;
    } 
    if(j.get<std::string>() == "Visible") {
      v = LolClashClashVisibility::Visible_e;
      return;
    } 
  }
}