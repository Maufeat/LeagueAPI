#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class PatcherComponentResourceHistory { /**/ 
    keep_e = 1, /**/ 
    none_e = 0, /**/ 
  };
  static void to_json(json& j, const PatcherComponentResourceHistory& v) {
    switch(v) { 
    case PatcherComponentResourceHistory::keep_e:
      j = "keep";
    break;
    case PatcherComponentResourceHistory::none_e:
      j = "none";
    break;
    };
  }
  static void from_json(const json& j, PatcherComponentResourceHistory& v) {
    auto s = j.get<std::string>(); 
    if(s == "keep") {
      v = PatcherComponentResourceHistory::keep_e;
      return;
    } 
    if(s == "none") {
      v = PatcherComponentResourceHistory::none_e;
      return;
    } 
  }
} 