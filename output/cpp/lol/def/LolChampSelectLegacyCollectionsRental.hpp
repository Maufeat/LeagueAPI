#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampSelectLegacyCollectionsRental { 
    bool rented; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyCollectionsRental& v) {
    j["rented"] = v.rented; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyCollectionsRental& v) {
    v.rented = j.at("rented").get<bool>(); 
  }
}