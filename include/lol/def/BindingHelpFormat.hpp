#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct BindingHelpFormat {  
    Epytext_e = 2,
    Full_e = 1,
  };
  inline void to_json(json& j, const BindingHelpFormat& v) {
    if(v == BindingHelpFormat::Epytext_e) {
      j = "Epytext";
      return;
    }
    if(v == BindingHelpFormat::Full_e) {
      j = "Full";
      return;
    }
  }
  inline void from_json(const json& j, BindingHelpFormat& v) {
    if(j.get<std::string>() == "Epytext") {
      v = BindingHelpFormat::Epytext_e;
      return;
    } 
    if(j.get<std::string>() == "Full") {
      v = BindingHelpFormat::Full_e;
      return;
    } 
  }
}