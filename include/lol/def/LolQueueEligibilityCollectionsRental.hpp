#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolQueueEligibilityCollectionsRental { 
    bool rented; 
  };
  inline void to_json(json& j, const LolQueueEligibilityCollectionsRental& v) {
    j["rented"] = v.rented; 
  }
  inline void from_json(const json& j, LolQueueEligibilityCollectionsRental& v) {
    v.rented = j.at("rented").get<bool>(); 
  }
}