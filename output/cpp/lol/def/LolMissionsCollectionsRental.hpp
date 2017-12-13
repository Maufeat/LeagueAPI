#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolMissionsCollectionsRental { 
    bool rented; 
  };
  void to_json(json& j, const LolMissionsCollectionsRental& v) {
    j["rented"] = v.rented; 
  }
  void from_json(const json& j, LolMissionsCollectionsRental& v) {
    v.rented = j.at("rented").get<bool>(); 
  }
}