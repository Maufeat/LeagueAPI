#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolStoreBundleItemDTO { 
    int64_t ip;
    uint32_t quantity;
    int64_t discountedRp;
    int32_t itemId;
    std::string iconUrl;
    std::string description;
    std::string name;
    bool owned;
    std::string inventoryType;
    int64_t rp; 
  };
  void to_json(json& j, const LolStoreBundleItemDTO& v) {
    j["ip"] = v.ip; 
    j["quantity"] = v.quantity; 
    j["discountedRp"] = v.discountedRp; 
    j["itemId"] = v.itemId; 
    j["iconUrl"] = v.iconUrl; 
    j["description"] = v.description; 
    j["name"] = v.name; 
    j["owned"] = v.owned; 
    j["inventoryType"] = v.inventoryType; 
    j["rp"] = v.rp; 
  }
  void from_json(const json& j, LolStoreBundleItemDTO& v) {
    v.ip = j.at("ip").get<int64_t>(); 
    v.quantity = j.at("quantity").get<uint32_t>(); 
    v.discountedRp = j.at("discountedRp").get<int64_t>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.rp = j.at("rp").get<int64_t>(); 
  }
}