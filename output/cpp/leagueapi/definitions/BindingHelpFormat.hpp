#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class BindingHelpFormat { /*Help format for binding functions and types.*/ 
    Epytext_e = 2, /*Python epytext format*/ 
    Full_e = 1, /*Native help format*/ 
  };
  static void to_json(json& j, const BindingHelpFormat& v) {
    switch(v) { 
    case BindingHelpFormat::Epytext_e:
      j = "Epytext";
    break;
    case BindingHelpFormat::Full_e:
      j = "Full";
    break;
    };
  }
  static void from_json(const json& j, BindingHelpFormat& v) {
    auto s = j.get<std::string>(); 
    if(s == "Epytext") {
      v = BindingHelpFormat::Epytext_e;
      return;
    } 
    if(s == "Full") {
      v = BindingHelpFormat::Full_e;
      return;
    } 
  }
} 