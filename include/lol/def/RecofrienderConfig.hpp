#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RecofrienderConfig { 
    std::string ContactsUrlTemplate;
    std::vector<std::string> EnabledNetworks;
    std::string FaqLink;
    uint64_t ExternalCallTimeoutSeconds;
    bool EnableSocial;
    std::string ContactDetailsUrlTemplate; 
  };
  inline void to_json(json& j, const RecofrienderConfig& v) {
    j["ContactsUrlTemplate"] = v.ContactsUrlTemplate; 
    j["EnabledNetworks"] = v.EnabledNetworks; 
    j["FaqLink"] = v.FaqLink; 
    j["ExternalCallTimeoutSeconds"] = v.ExternalCallTimeoutSeconds; 
    j["EnableSocial"] = v.EnableSocial; 
    j["ContactDetailsUrlTemplate"] = v.ContactDetailsUrlTemplate; 
  }
  inline void from_json(const json& j, RecofrienderConfig& v) {
    v.ContactsUrlTemplate = j.at("ContactsUrlTemplate").get<std::string>(); 
    v.EnabledNetworks = j.at("EnabledNetworks").get<std::vector<std::string>>(); 
    v.FaqLink = j.at("FaqLink").get<std::string>(); 
    v.ExternalCallTimeoutSeconds = j.at("ExternalCallTimeoutSeconds").get<uint64_t>(); 
    v.EnableSocial = j.at("EnableSocial").get<bool>(); 
    v.ContactDetailsUrlTemplate = j.at("ContactDetailsUrlTemplate").get<std::string>(); 
  }
}