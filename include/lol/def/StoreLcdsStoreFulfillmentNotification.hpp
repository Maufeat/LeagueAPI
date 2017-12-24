#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct StoreLcdsStoreFulfillmentNotification { 
    int64_t ip;
    int64_t rp;
    json data;
    std::string inventoryType; 
  };
  inline void to_json(json& j, const StoreLcdsStoreFulfillmentNotification& v) {
    j["ip"] = v.ip; 
    j["rp"] = v.rp; 
    j["data"] = v.data; 
    j["inventoryType"] = v.inventoryType; 
  }
  inline void from_json(const json& j, StoreLcdsStoreFulfillmentNotification& v) {
    v.ip = j.at("ip").get<int64_t>(); 
    v.rp = j.at("rp").get<int64_t>(); 
    v.data = j.at("data").get<json>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
  }
}