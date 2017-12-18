#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct PatcherComponentResourceHistory {  
    keep_e = 1,
    none_e = 0,
  };
  inline void to_json(json& j, const PatcherComponentResourceHistory& v) {
    if(v == PatcherComponentResourceHistory::keep_e) {
      j = "keep";
      return;
    }
    if(v == PatcherComponentResourceHistory::none_e) {
      j = "none";
      return;
    }
  }
  inline void from_json(const json& j, PatcherComponentResourceHistory& v) {
    if(j.get<std::string>() == "keep") {
      v = PatcherComponentResourceHistory::keep_e;
      return;
    } 
    if(j.get<std::string>() == "none") {
      v = PatcherComponentResourceHistory::none_e;
      return;
    } 
  }
}