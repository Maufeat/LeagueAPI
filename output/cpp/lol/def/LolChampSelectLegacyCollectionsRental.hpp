#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChampSelectLegacyCollectionsRental { 
    bool rented; 
  };
  void to_json(json& j, const LolChampSelectLegacyCollectionsRental& v) {
  j["rented"] = v.rented; 
  }
  void from_json(const json& j, LolChampSelectLegacyCollectionsRental& v) {
  v.rented = j.at("rented").get<bool>(); 
  }
}