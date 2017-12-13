#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct StoreLcdsStoreFulfillmentNotification { 
    int64_t ip;
    int64_t rp;
    std::string inventoryType;
    json data; 
  };
  void to_json(json& j, const StoreLcdsStoreFulfillmentNotification& v) {
  j["ip"] = v.ip; 
  j["rp"] = v.rp; 
  j["inventoryType"] = v.inventoryType; 
  j["data"] = v.data; 
  }
  void from_json(const json& j, StoreLcdsStoreFulfillmentNotification& v) {
  v.ip = j.at("ip").get<int64_t>(); 
  v.rp = j.at("rp").get<int64_t>(); 
  v.inventoryType = j.at("inventoryType").get<std::string>(); 
  v.data = j.at("data").get<json>(); 
  }
}