#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct ActiveBoostsLcdsStoreFulfillmentNotification { /**/ 
    std::string inventoryType;/**/
    json data;/**/
  };
  static void to_json(json& j, const ActiveBoostsLcdsStoreFulfillmentNotification& v) { 
    j["inventoryType"] = v.inventoryType;
    j["data"] = v.data;
  }
  static void from_json(const json& j, ActiveBoostsLcdsStoreFulfillmentNotification& v) { 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.data = j.at("data").get<json>(); 
  }
} 