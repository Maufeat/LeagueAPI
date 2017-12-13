#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLicenseAgreementLicenseAgreement.hpp>
namespace lol {
  Result<std::vector<LolLicenseAgreementLicenseAgreement>> GetLolLicenseAgreementV1AllAgreements(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolLicenseAgreementLicenseAgreement>> {
        _client_.request("get", "/lol-license-agreement/v1/all-agreements?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLicenseAgreementLicenseAgreement>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}