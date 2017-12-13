#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RecofrienderConfig { 
    uint64_t ExternalCallTimeoutSeconds;
    std::string ContactDetailsUrlTemplate;
    bool EnableSocial;
    std::vector<std::string> EnabledNetworks;
    std::string FaqLink;
    std::string ContactsUrlTemplate; 
  };
  void to_json(json& j, const RecofrienderConfig& v) {
    j["ExternalCallTimeoutSeconds"] = v.ExternalCallTimeoutSeconds; 
    j["ContactDetailsUrlTemplate"] = v.ContactDetailsUrlTemplate; 
    j["EnableSocial"] = v.EnableSocial; 
    j["EnabledNetworks"] = v.EnabledNetworks; 
    j["FaqLink"] = v.FaqLink; 
    j["ContactsUrlTemplate"] = v.ContactsUrlTemplate; 
  }
  void from_json(const json& j, RecofrienderConfig& v) {
    v.ExternalCallTimeoutSeconds = j.at("ExternalCallTimeoutSeconds").get<uint64_t>(); 
    v.ContactDetailsUrlTemplate = j.at("ContactDetailsUrlTemplate").get<std::string>(); 
    v.EnableSocial = j.at("EnableSocial").get<bool>(); 
    v.EnabledNetworks = j.at("EnabledNetworks").get<std::vector<std::string>>(); 
    v.FaqLink = j.at("FaqLink").get<std::string>(); 
    v.ContactsUrlTemplate = j.at("ContactsUrlTemplate").get<std::string>(); 
  }
}