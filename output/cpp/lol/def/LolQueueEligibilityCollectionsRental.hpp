#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolQueueEligibilityCollectionsRental { 
    bool rented; 
  };
  void to_json(json& j, const LolQueueEligibilityCollectionsRental& v) {
  j["rented"] = v.rented; 
  }
  void from_json(const json& j, LolQueueEligibilityCollectionsRental& v) {
  v.rented = j.at("rented").get<bool>(); 
  }
}