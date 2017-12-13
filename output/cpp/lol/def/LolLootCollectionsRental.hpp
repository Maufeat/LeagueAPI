#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLootCollectionsRental { 
    bool rented; 
  };
  void to_json(json& j, const LolLootCollectionsRental& v) {
  j["rented"] = v.rented; 
  }
  void from_json(const json& j, LolLootCollectionsRental& v) {
  v.rented = j.at("rented").get<bool>(); 
  }
}