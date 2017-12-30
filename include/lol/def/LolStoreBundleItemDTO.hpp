#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolStoreBundleItemDTO { 
    std::string name;
    int64_t discountedRp;
    bool owned;
    std::string inventoryType;
    uint32_t quantity;
    std::string description;
    std::string iconUrl;
    int64_t rp;
    int32_t itemId;
    int64_t ip; 
  };
  inline void to_json(json& j, const LolStoreBundleItemDTO& v) {
    j["name"] = v.name; 
    j["discountedRp"] = v.discountedRp; 
    j["owned"] = v.owned; 
    j["inventoryType"] = v.inventoryType; 
    j["quantity"] = v.quantity; 
    j["description"] = v.description; 
    j["iconUrl"] = v.iconUrl; 
    j["rp"] = v.rp; 
    j["itemId"] = v.itemId; 
    j["ip"] = v.ip; 
  }
  inline void from_json(const json& j, LolStoreBundleItemDTO& v) {
    v.name = j.at("name").get<std::string>(); 
    v.discountedRp = j.at("discountedRp").get<int64_t>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.quantity = j.at("quantity").get<uint32_t>(); 
    v.description = j.at("description").get<std::string>(); 
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
    v.rp = j.at("rp").get<int64_t>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.ip = j.at("ip").get<int64_t>(); 
  }
}