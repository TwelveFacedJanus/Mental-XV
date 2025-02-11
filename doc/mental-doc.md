# Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`MentalApplicationInfo`](#structMentalApplicationInfo) | Structure containing application information.
`struct `[`MentalInstance`](#structMentalInstance) | 
`struct `[`MentalInstanceCreateInfo`](#structMentalInstanceCreateInfo) | Structure containing information for creating an instance.

# struct `MentalApplicationInfo` {#structMentalApplicationInfo}

Structure containing application information.

This structure holds various pieces of information about the application, such as its name, version, engine name, and engine version.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`MentalStructureType`](#mental__xv__core_8h_1a4040728f3adc443389084c52cc3dacf8)` `[`sType`](#structMentalApplicationInfo_1a78354ca5ff3d4b2f0077822c30973d84) | Type of the structure.
`public const void * `[`pNext`](#structMentalApplicationInfo_1a42f026a9c165b1f7841f22145707c723) | Pointer to the next structure in a chain.
`public const char * `[`pApplicationName`](#structMentalApplicationInfo_1ad62d689d5ee1bbc561454a4e6fe762ad) | Name of the application.
`public uint32_t `[`applicationVersion`](#structMentalApplicationInfo_1a3172706bb52464086f3548c97271cbc6) | Version of the application.
`public const char * `[`pEngineName`](#structMentalApplicationInfo_1a32fe1ca61f17300b4bd8a6a6d0b95b66) | Name of the engine.
`public uint32_t `[`engineVersion`](#structMentalApplicationInfo_1a7ec42998c0d337df529ac9010d53a320) | Version of the engine.
`public uint32_t `[`apiVersion`](#structMentalApplicationInfo_1a31c14901186b58ad1801a618bc8e8121) | Version of the API.

## Members

#### `public `[`MentalStructureType`](#mental__xv__core_8h_1a4040728f3adc443389084c52cc3dacf8)` `[`sType`](#structMentalApplicationInfo_1a78354ca5ff3d4b2f0077822c30973d84) {#structMentalApplicationInfo_1a78354ca5ff3d4b2f0077822c30973d84}

Type of the structure.

#### `public const void * `[`pNext`](#structMentalApplicationInfo_1a42f026a9c165b1f7841f22145707c723) {#structMentalApplicationInfo_1a42f026a9c165b1f7841f22145707c723}

Pointer to the next structure in a chain.

#### `public const char * `[`pApplicationName`](#structMentalApplicationInfo_1ad62d689d5ee1bbc561454a4e6fe762ad) {#structMentalApplicationInfo_1ad62d689d5ee1bbc561454a4e6fe762ad}

Name of the application.

#### `public uint32_t `[`applicationVersion`](#structMentalApplicationInfo_1a3172706bb52464086f3548c97271cbc6) {#structMentalApplicationInfo_1a3172706bb52464086f3548c97271cbc6}

Version of the application.

#### `public const char * `[`pEngineName`](#structMentalApplicationInfo_1a32fe1ca61f17300b4bd8a6a6d0b95b66) {#structMentalApplicationInfo_1a32fe1ca61f17300b4bd8a6a6d0b95b66}

Name of the engine.

#### `public uint32_t `[`engineVersion`](#structMentalApplicationInfo_1a7ec42998c0d337df529ac9010d53a320) {#structMentalApplicationInfo_1a7ec42998c0d337df529ac9010d53a320}

Version of the engine.

#### `public uint32_t `[`apiVersion`](#structMentalApplicationInfo_1a31c14901186b58ad1801a618bc8e8121) {#structMentalApplicationInfo_1a31c14901186b58ad1801a618bc8e8121}

Version of the API.

# struct `MentalInstance` {#structMentalInstance}

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`MentalApplicationInfo`](#structMentalApplicationInfo)` `[`appInfo`](#structMentalInstance_1a01215c57765e3a793614f119fa0fde48) | 
`public `[`MentalInstanceCreateInfo`](#structMentalInstanceCreateInfo)` `[`instanceInfo`](#structMentalInstance_1aad5673f80ee12d52db6796962b5cb41a) | 

## Members

#### `public `[`MentalApplicationInfo`](#structMentalApplicationInfo)` `[`appInfo`](#structMentalInstance_1a01215c57765e3a793614f119fa0fde48) {#structMentalInstance_1a01215c57765e3a793614f119fa0fde48}

#### `public `[`MentalInstanceCreateInfo`](#structMentalInstanceCreateInfo)` `[`instanceInfo`](#structMentalInstance_1aad5673f80ee12d52db6796962b5cb41a) {#structMentalInstance_1aad5673f80ee12d52db6796962b5cb41a}

# struct `MentalInstanceCreateInfo` {#structMentalInstanceCreateInfo}

Structure containing information for creating an instance.

This structure holds various pieces of information required to create an instance, such as application info, enabled layers, and enabled extensions.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`MentalStructureType`](#mental__xv__core_8h_1a4040728f3adc443389084c52cc3dacf8)` `[`sType`](#structMentalInstanceCreateInfo_1a98666ccff1ea1f483cbe13161023c8aa) | Type of the structure.
`public const void * `[`pNext`](#structMentalInstanceCreateInfo_1adf1491d6421cfcb15ad3e5996f592848) | Pointer to the next structure in a chain.
`public `[`MentalInstanceCreateFlags`](#mental__xv__core_8h_1a8001f712b14b0ececd970c22c972969a)` `[`flags`](#structMentalInstanceCreateInfo_1aaa26a260d2575c6a4581cddc5a8aaa62) | Flags for instance creation.
`public const `[`MentalApplicationInfo`](#structMentalApplicationInfo)` * `[`pApplicationInfo`](#structMentalInstanceCreateInfo_1a727f4c194e46fb87f1f093442a0a6674) | Pointer to application info.
`public uint32_t `[`enabledLayerCount`](#structMentalInstanceCreateInfo_1a89911e7d11c0208b449d1c4b7a127da5) | Number of enabled layers.
`public const char *const  * `[`ppEnabledLayerNames`](#structMentalInstanceCreateInfo_1aa39f2523416b30281105df7ebb1a9a22) | Array of enabled layer names.
`public uint32_t `[`enabledExtensionCount`](#structMentalInstanceCreateInfo_1af29f97fa6365e2f365699ccf5fa6cc86) | Number of enabled extensions.
`public const char *const  * `[`ppEnabledExtensionNames`](#structMentalInstanceCreateInfo_1a859a0d0dd65217b9e66a28958be09d52) | Array of enabled extension names.

## Members

#### `public `[`MentalStructureType`](#mental__xv__core_8h_1a4040728f3adc443389084c52cc3dacf8)` `[`sType`](#structMentalInstanceCreateInfo_1a98666ccff1ea1f483cbe13161023c8aa) {#structMentalInstanceCreateInfo_1a98666ccff1ea1f483cbe13161023c8aa}

Type of the structure.

#### `public const void * `[`pNext`](#structMentalInstanceCreateInfo_1adf1491d6421cfcb15ad3e5996f592848) {#structMentalInstanceCreateInfo_1adf1491d6421cfcb15ad3e5996f592848}

Pointer to the next structure in a chain.

#### `public `[`MentalInstanceCreateFlags`](#mental__xv__core_8h_1a8001f712b14b0ececd970c22c972969a)` `[`flags`](#structMentalInstanceCreateInfo_1aaa26a260d2575c6a4581cddc5a8aaa62) {#structMentalInstanceCreateInfo_1aaa26a260d2575c6a4581cddc5a8aaa62}

Flags for instance creation.

#### `public const `[`MentalApplicationInfo`](#structMentalApplicationInfo)` * `[`pApplicationInfo`](#structMentalInstanceCreateInfo_1a727f4c194e46fb87f1f093442a0a6674) {#structMentalInstanceCreateInfo_1a727f4c194e46fb87f1f093442a0a6674}

Pointer to application info.

#### `public uint32_t `[`enabledLayerCount`](#structMentalInstanceCreateInfo_1a89911e7d11c0208b449d1c4b7a127da5) {#structMentalInstanceCreateInfo_1a89911e7d11c0208b449d1c4b7a127da5}

Number of enabled layers.

#### `public const char *const  * `[`ppEnabledLayerNames`](#structMentalInstanceCreateInfo_1aa39f2523416b30281105df7ebb1a9a22) {#structMentalInstanceCreateInfo_1aa39f2523416b30281105df7ebb1a9a22}

Array of enabled layer names.

#### `public uint32_t `[`enabledExtensionCount`](#structMentalInstanceCreateInfo_1af29f97fa6365e2f365699ccf5fa6cc86) {#structMentalInstanceCreateInfo_1af29f97fa6365e2f365699ccf5fa6cc86}

Number of enabled extensions.

#### `public const char *const  * `[`ppEnabledExtensionNames`](#structMentalInstanceCreateInfo_1a859a0d0dd65217b9e66a28958be09d52) {#structMentalInstanceCreateInfo_1a859a0d0dd65217b9e66a28958be09d52}

Array of enabled extension names.

Generated by [Moxygen](https://sourcey.com/moxygen)